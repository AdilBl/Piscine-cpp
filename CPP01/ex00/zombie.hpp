#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    public:
        Zombie(std::string str);
        void announce(void);
        ~Zombie(void);

    private:
        std::string _name;
    
};
#endif