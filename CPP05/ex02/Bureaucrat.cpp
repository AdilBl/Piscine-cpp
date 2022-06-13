#include "header.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
        {
            this->_grade = grade;
        }
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cout<< e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cout<< e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):_name(src.getname())
{
    *this = src;

    return;
}

void Bureaucrat::signForm(Form Formulaire)
{
    if (Formulaire.getsigned())
        std::cout << getname() << " signed " << Formulaire.getname() << std::endl;
    else
        std::cout << getname() << " couldn't signed " << Formulaire.getname() << std::endl;
}

void Bureaucrat::decrementation(void)
{
    try
    {
        if (getgrade() + 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade++;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout<< e.what() << std::endl;
    }
}

void Bureaucrat::incrementation(void)
{
    try
    {
        if (getgrade() - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade--;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout<< e.what() << std::endl;
    }
}

int    Bureaucrat::getgrade(void) const
{
    return(this->_grade);
}

std::string Bureaucrat::getname(void) const
{
    return(this->_name);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
    if (!(this == &rhs))
    {
        this->_grade = rhs._grade;
    }
    return (*this);
}

std::string Bureaucrat::speach(void) const
{
    std::string speach;
    speach.append(getname());
    speach.append(",bureaucrat grade: ");
    return(speach);
}
std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i)
{
    o << i.speach();
    o << i.getgrade();
    return(o);
}