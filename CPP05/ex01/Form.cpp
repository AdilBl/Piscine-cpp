#include "header.hpp"

Form::Form(std::string name, int gradetoexecute, int gradetosign):_name(name),_gradetosign(gradetosign),_gradetoexecute(gradetoexecute)
{
    try
    {
        if (gradetoexecute < 1 || gradetosign < 1)
            throw GradeTooHighException();
        else if (gradetoexecute > 150 || gradetosign > 150)
            throw GradeTooLowException();
        else
        {
            this->signé = false;
        }
    }
    catch(GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
}

Form::~Form()
{
}

void Form::besigned(Bureaucrat Bureau)
{
    try
    {
        if (Bureau.getgrade() > this->_gradetosign)
        {
            throw GradeTooLowException();
            Bureau.signForm(*this);
        }
        else if (this->signé)
            throw Alreadysign();
        else
        {
            this->signé = true;
            Bureau.signForm(*this);
        }
    }
    catch(GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Alreadysign& e)
    {
        std::cout << e.what() << std::endl;
    }
}

int Form::getgradetoexecute(void) const
{
    return(this->_gradetoexecute);
}

int Form::getgradetosigne(void) const
{
    return(this->_gradetosign);
}

bool Form::getsigned(void) const
{
    return(this->signé);
}

std::string Form::getname(void) const
{
    return(this->_name);
}

Form::Form(Form const & src):_name(src._name),_gradetosign(src._gradetosign),_gradetoexecute(src._gradetoexecute)
{
    *this = src;

    return;
}

Form & Form::operator=(Form const & rhs)
{
    if (!(this == &rhs))
    {
        this->signé = rhs.signé;
    }
    return (*this);
}

std::ostream &  operator<<(std::ostream & o, Form const & i)
{
    o << i.getname() << ", Level to sign: " << i.getgradetosigne() << " , Level to execut :" << i.getgradetoexecute();
    if (i.getsigned())
        o << " .Is signed" << std::endl;
    else
        o << " .Is not signed" << std::endl;
    return(o);
}