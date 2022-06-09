#include "header.hpp"

int main(void)
{
    FragTrap Perso1("Agride");

    std::cout << "Vie:" << Perso1.getpdv() << std::endl;
    std::cout << "Damage:" << Perso1.getdamage() << std::endl;
    std::cout << "Mana:" << Perso1.getmana() << std::endl;

    Perso1.attack("Serpent");
    Perso1.takeDamage(52);
    Perso1.beRepaired(2);

    std::cout << "Vie:" << Perso1.getpdv() << std::endl;
    std::cout << "Damage:" << Perso1.getdamage() << std::endl;
    std::cout << "Mana:" << Perso1.getmana() << std::endl;

    Perso1.highFivesGuys();
}