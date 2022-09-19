#include "header.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Default", 137, 145)
{
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form("Default", 137, 145)
{
    *this = src;

    return;
}

std::string ShrubberyCreationForm::gettarger(void) const
{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getgrade() > getgradetoexecute())
        throw   GradeTooLowException();
    if (!Form::getsigned())
        throw   Notsigned();
    std::ofstream file;

    std::string nameFile = this->_target + "_shrubbery";

    file.open(nameFile.c_str());
    if (file.is_open())
    {
        file <<
            "     *    " << std::endl <<        
            "     #    " << std::endl <<
            "    ###   " << std::endl <<
            "   #####  " << std::endl <<
            "  ####### " << std::endl <<
            "     #    " << std::endl <<
            "     #    " << std::endl;
    }
    file.close();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    if (!(this == &rhs))
    {
        this->_target = rhs.gettarger();
    }
    return (*this);
}
