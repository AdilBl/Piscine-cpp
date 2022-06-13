#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm :  public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm(std::string name);
        virtual ~RobotomyRequestForm();

        std::string gettarger(void) const;
        virtual void    execute(Bureaucrat const & executor) const;
    
        RobotomyRequestForm &      operator=(RobotomyRequestForm const & rhs);
};

#endif