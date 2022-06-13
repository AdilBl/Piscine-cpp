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
            std::cout << "Bureaucrat get created" << std::endl;
        }
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Impossible de construitre grade trop bas" << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Impossible de construitre grade trop haut" << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat get destroy" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):_name(src.getname())
{
    *this = src;

    return;
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
        std::cout << "Impossible de decrementer" << std::endl;
    }
}

void Bureaucrat::incrementation(void)
{
    try
    {
        if (getgrade() - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade++;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Impossible de decrementer" << std::endl;
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
        // this->_name = rhs._name;
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