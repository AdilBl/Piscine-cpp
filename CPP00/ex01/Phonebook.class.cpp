#include "header.hpp"

Phonebook::Phonebook(void)
{
    this->index = 0;
    this->nbofcount = 0;
}

Phonebook::~Phonebook(void)
{
}

void Phonebook::Add(void)
{
    int i = 0;
    std::string buffer;
    while (i < 5)
    {
        std::cout << this->contact->arccontact[i];
        std::getline(std::cin, buffer);
        if (!buffer.empty())
        {
            this->contact[this->index % 8].Conta[i] = buffer;
            i++;
        }
    }
    this->index++;
    if (this->nbofcount != 8)
        this->nbofcount++;
}

void Phonebook::Printsearch(int index)
{
    int i;

    i = 0;
    while (i < this->nbofcount)
    {
        if (this->contact[i].Conta[index].length() > 9)
            std::cout<< std::setw(9) << this->contact[i].Conta[index].substr(0, 9) << '.';
        else
            std::cout<< std::setw(10) << this->contact[i].Conta[index];
        if (i + 1 != this->nbofcount)
           std::cout<< "|";
        i++;
    }
    std::cout<< std::endl;
}

void Phonebook::Search(void)
{
    int i;

    if (this->nbofcount == 0)
    {
        std::cout << "Il n'y a aucun contact enregistré" << std::endl;
        return ;
    }
    i = 0;
    while (i < this->nbofcount)
    {
        std::cout<< std::setw(9) << "Index :" << i + 1;
        if (i + 1 != this->nbofcount)
           std::cout<< "|";
        i++;
    }
    std::cout<< std::endl;
    this->Printsearch(0);
    this->Printsearch(1);
    this->Printsearch(2);
    std::cout<< std::endl;
    std::cout<< std::endl;
    std::cout << "Index du contact : ";
    std::cin >> i;
    if (std::cin.fail() || (i <= 0 || i >= 9))
    {
        std::cin.clear();
        std::cout << "Error d'index !"<< std::endl;
    }
    else if (i > this->nbofcount)
        std::cout << "Contact inexistant !"<< std::endl;
    else
    {
        std::cout << "Index : " << i << std::endl;
        for (int z = 0; z < 5; z++)
            std::cout << this->contact[i - 1].arccontact[z] << this->contact[i - 1].Conta[z] << std::endl;
    }
}