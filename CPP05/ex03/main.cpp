#include "header.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
    Intern someRandomIntern;
    Bureaucrat Smith = Bureaucrat("Smith", 12);
    Form* rrf;

    try
    {
        rrf = someRandomIntern.makeForm("ROBOTOMY REQUEST", "Bender");
        rrf->besigned(Smith);
        rrf->execute(Smith);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}