#include "header.hpp"

int main()
{
    Animale* Tableau[10];

    for(int i = 0 ; i < 5; i++)
        Tableau[i] = new Cat();
    for(int i = 5 ; i < 10; i++)
        Tableau[i] = new Dog();

    Cat Test;
    Cat Test2 = Test;

    Dog Test3;
    Dog Test4(Test3);

    std::cout << std::endl;
    Tableau[2]->makeSound();
    Tableau[6]->makeSound();
    std::cout << std::endl;
    
    for(int i = 0; i < 10; i++)
        delete(Tableau[i]);
    return 0;
}