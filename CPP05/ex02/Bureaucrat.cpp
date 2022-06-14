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

void Bureaucrat::signForm(Form & form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception const & error)
    {
        std::cout << this->_name  << " couldn’t sign " << form.getName() << " because " << error.what() << std::endl;
    }           
}

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " execute " << form.getName() << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cout << this->_name  << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
    }
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