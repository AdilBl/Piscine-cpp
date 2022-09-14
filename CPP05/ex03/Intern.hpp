#pragma once
#ifndef INTERN_HPP
# define INTER_HPP

# include "header.hpp"

class Intern
{
    private:
        static std::string allFormulaire[3];
    public:
        Intern(void);
        virtual ~Intern();

        std::string stringtoupper(std::string str);
        Form * makeForm(std::string formulaire, std::string target);
        class Noformfound : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Problem: No form found");
                }
        };
};


#endif