#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(std::string name);
        virtual ~ShrubberyCreationForm();

        std::string gettarger(void) const;
        virtual void    execute(Bureaucrat const & executor) const;
    
        ShrubberyCreationForm &      operator=(ShrubberyCreationForm const & rhs);
};

#endif