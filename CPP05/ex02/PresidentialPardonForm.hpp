#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class RobotomyRequestForm :  public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm(std::string name);
        virtual ~PresidentialPardonForm();

        std::string gettarger(void) const;
        virtual void    execute(Bureaucrat const & executor) const;
    
        PresidentialPardonForm &      operator=(PresidentialPardonForm const & rhs);
};

#endif