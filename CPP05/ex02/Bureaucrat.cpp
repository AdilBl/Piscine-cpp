#include "header.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
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
    form.besigned(*this);
    std::cout << this->_name << " signed " << form.getname() << std::endl;          
}

void Bureaucrat::executeForm(Form const & form)
{
    form.execute(*this);
    std::cout << this->getname() << " execute " << form.getname() << std::endl;
}
void Bureaucrat::decrementation(void)
{
    if (getgrade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void Bureaucrat::incrementation(void)
{
    if (getgrade() - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
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