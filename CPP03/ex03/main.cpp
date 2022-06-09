#include "header.hpp"

int main(void)
{
    DiamondTrap Perso1("Agride");

    std::cout << "Vie:" << Perso1.getpdv() << std::endl;
    std::cout << "Damage:" << Perso1.getdamage() << std::endl;
    std::cout << "Mana:" << Perso1.getmana() << std::endl;

    Perso1.attack("Serpent");

    std::cout << "Vie:" << Perso1.getpdv() << std::endl;
    std::cout << "Damage:" << Perso1.getdamage() << std::endl;
    std::cout << "Mana:" << Perso1.getmana() << std::endl;

    Perso1.highFivesGuys();
    Perso1.whoAmI();
    Perso1.guardGate();
}