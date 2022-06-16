#include "header.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
    Intern someRandomIntern;
    Bureaucrat Smith = Bureaucrat("Smith", 12);
    Form* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->besigned(Smith);
    rrf->execute(Smith);
}