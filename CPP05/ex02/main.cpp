#include "header.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
    Bureaucrat test =  Bureaucrat("Adil", 150);
    Bureaucrat  smith = Bureaucrat("Smith", 3);
    ShrubberyCreationForm test2 = ShrubberyCreationForm("Test");
    RobotomyRequestForm test3 = RobotomyRequestForm("Test");
    PresidentialPardonForm test4 = PresidentialPardonForm("Smith");

    test2.execute(test);
    test2.execute(smith);
    test2.besigned(test);
    test2.besigned(smith);
    test2.execute(smith);
    test3.besigned(smith);
    test3.execute(smith);
    test4.besigned(smith);
    test4.execute(smith);
}