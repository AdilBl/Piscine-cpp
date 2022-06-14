#include "header.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Default", 45, 72)
{
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form("Default", 45, 72)
{
    *this = src;

    return;
}

std::string PresidentialPardonForm::gettarger(void) const
{
    return (this->_target);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getgrade() > getgradetoexecute())
            throw   GradeTooLowException();
        if (!Form::getsigned())
            throw   Notsigned();
        std::cout << "La " << this->_target << " a été pardonnée par Zaphod Beeblebrox." << std::endl;
    }
    catch(GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Notsigned & e)
    {
        std::cout << e.what() << std::endl;
    }
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    if (!(this == &rhs))
    {
        this->_target = rhs.gettarger();
    }
    return (*this);
}