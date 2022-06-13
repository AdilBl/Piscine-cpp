#pragma once
# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include "Form.hpp"
#include "header.hpp"

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat();

        void        incrementation(void);
        void        decrementation(void);
        std::string getname(void) const;
        std::string speach(void) const;
        int         getgrade(void) const;
        void        signForm(Form formulaire);
        Bureaucrat & operator=(Bureaucrat const & rhs);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Problem: Grade is to hight");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Problem: Grade is to Low");
                }
        };
};
    std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i);

#endif