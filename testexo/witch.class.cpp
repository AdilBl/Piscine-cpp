
#include "header.hpp"

stagiere::stagiere(std::string name)
{
            this->name = name;
            return ; 
}

stagiere::stagiere(void)
{
            this->name = "unknow";
            return ; 
}
stagiere::~stagiere(void)
{
    std::cout << "je me detrout" << std::endl;
}