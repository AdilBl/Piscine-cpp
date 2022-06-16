#pragma once
#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include "header.hpp"

class Bureaucrat;

class Form
{
    private:
        const   std::string _name;
        bool    signé;
        int     _gradetosign;
        int     _gradetoexecute;
    public:
        Form(std::string name, int gradetoexecute, int gradetosign);
        Form(Form const & src);
        virtual ~Form();

        bool        getsigned(void) const;
        std::string getname(void) const;
        int         getgradetosigne(void) const;
        int         getgradetoexecute(void) const;
        Form &      operator=(Form const & rhs);
        void        besigned(Bureaucrat Bureau);
        virtual void        execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Problem Form: Grade is to hight");
                }
        };
        class Alreadysign : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form is already sign");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Problem Form: Grade is to Low");
                }
        };
        class Notsigned : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("The form is not signed");
                }
        };
};

std::ostream &  operator<<(std::ostream & o, Form const & i);
#endif