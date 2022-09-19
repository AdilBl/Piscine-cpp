#include "header.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat test =  Bureaucrat("Adil", 150);
        Bureaucrat  smith = Bureaucrat("Smith", 3);
        Form test1 =  Form("Livre", 50, 50);

        std::cout << test1;
        test1.besigned(test);
        test1.besigned(smith);
        test1.besigned(test);
        test1.besigned(smith);
        std::cout << test1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}