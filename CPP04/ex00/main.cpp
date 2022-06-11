#include "header.hpp"

int main()
{
    const Animale* meta = new Animale();
    const Animale* j = new Dog();
    const Animale* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    const Wronganimale* d = new WrongCat();
    std::cout << d->getType() << " " << std::endl;
    d->makeSound();
    return 0;
}