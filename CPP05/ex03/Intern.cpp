#include "header.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

std::string Intern::stringtoupper(std::string str)
{
    int i;
    std::string tamp;

    i = 0;
    while (str[i])
        tamp += std::toupper(str[i++]);
    return (tamp);
}

std::string Intern::allFormulaire[3] = 
{
    "ROBOTOMY REQUEST",
    "PRESIDENTIAL PARDON",
    "SHRUBBERY CREATION"
};


Form * Intern::makeForm(std::string Formul, std::string target)
{
    std::string formulaire;
    int save;

    save = -1;
    formulaire = stringtoupper(Formul);
    Form * listeFormC[3];

    listeFormC[0] = new RobotomyRequestForm(target);
    listeFormC[2] = new ShrubberyCreationForm(target);
    listeFormC[1] = new PresidentialPardonForm(target);
    for (int i = 0; i < 3; i++)
    {
        if (formulaire == this->allFormulaire[i])
        {
            save = i;
        }
        else
            delete (listeFormC[i]);
    }
    if (save == -1)
    {
        throw Noformfound();
        return (0);
    }
    else
    {
        std::cout << "Intern creates " << Formul << std::endl;
        return(listeFormC[save]);
    }
}