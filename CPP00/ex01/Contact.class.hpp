#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "header.hpp"

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        int         index;
        std::string Conta[5]; //List de string avec comme index arccontact
        static std::string arccontact[5]; // Architecture du contact (static)
};

#endif // Contact




