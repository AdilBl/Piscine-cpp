#include "header.hpp"

Harl::Harl (void){
}

Harl::~Harl (void){
}

std::string Harl::comp[4] =
{
        "debug",
        "info",
        "warning",
        "error"
};

void Harl::complain(std::string level)
{
    bool    check;

    check = false;
    void	(Harl::*bugreportory[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
    for(int i = 0; i < 4; i++)
    {
        void (Harl::*bugtoselect)( void ) = bugreportory[i];
        if (level == this->comp[i])
        {
            (this->*bugtoselect)();
            check = true;
        }
    }
    if (!check)
        std::cout << "This level doesnt exist" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info (void)
{
    std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Harl::warning (void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Harl::error (void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}