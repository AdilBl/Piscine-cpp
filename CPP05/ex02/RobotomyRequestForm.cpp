#include "header.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Default", 45, 72)
{
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form("Default", 45, 72)
{
    *this = src;

    return;
}

std::string RobotomyRequestForm::gettarger(void) const
{
    return (this->_target);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getgrade() > getgradetoexecute())
            throw   GradeTooLowException();
        if (!Form::getsigned())
            throw   Notsigned();
        std::cout << "VRRRRRRTTRTRTRTRTTRTRTRTRTRTRTRR" << std::endl;
        if(std::rand() % 2 == 0)
            std::cout << gettarger() << " A etait robotomisée avec succés" << std::endl;
        else
            std::cout << gettarger() << " Robotomisation raté" << std::endl;
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

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    if (!(this == &rhs))
    {
        this->_target = rhs.gettarger();
    }
    return (*this);
}