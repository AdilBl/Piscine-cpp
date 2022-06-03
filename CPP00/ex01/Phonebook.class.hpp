#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "header.hpp"

class Phonebook
{
    public:  
        Contact contact[8]; //Declaration de 8 contact (Maximum)
        void Add();
        void Search();
        Phonebook(); 
        ~Phonebook();
    private:
        int index;
        int nbofcount; // Afin de savoir à quel moment il y a plus de 8 compte
        void Printsearch(int index); // Fonction annexe de search
};

#endif // Phonebook