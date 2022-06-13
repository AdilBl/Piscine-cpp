#include "header.hpp"

int main()
{
    Bureaucrat test = Bureaucrat("Adil", 151);
    Bureaucrat smith = Bureaucrat("Smith", 50);
    Bureaucrat test2 = Bureaucrat("test", 1);
    Bureaucrat oui = Bureaucrat(test);
    Bureaucrat test3 = Bureaucrat("TOTO", 150);

    std::cout << smith << std::endl; 
    std::cout << smith.getgrade() << std::endl;
    smith.decrementation();
    std::cout << smith.getgrade() << std::endl;
    smith.incrementation();
    std::cout << smith.getgrade() << std::endl;
    test2.incrementation();
    test3.decrementation();
}