# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Perso1("Agride");

    
    Perso1.takeDamage(5);
    std::cout << "PDV:" << Perso1.getpdv() << std::endl;
    Perso1.beRepaired(5);
    std::cout << "PDV:" << Perso1.getpdv() << std::endl;
    Perso1.attack("Serpent");
    Perso1.takeDamage(5);
    Perso1.beRepaired(1);
    Perso1.beRepaired(1);
    Perso1.beRepaired(1);
    Perso1.beRepaired(1);
    std::cout << "Mana:" << Perso1.getmana() << std::endl;
    Perso1.takeDamage(2);
    Perso1.beRepaired(1);
    Perso1.beRepaired(1);
    std::cout << "PDV:" << Perso1.getpdv() << std::endl;
    Perso1.takeDamage(11);
    std::cout << "PDV:" << Perso1.getpdv() << std::endl;
    std::cout << "Mana:" << Perso1.getmana() << std::endl;
    Perso1.beRepaired(5);
}