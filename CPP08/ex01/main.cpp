#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(17);
        sp.addNumber(1800);
        sp.addNumber(11);
        sp.addNumber(95);

        for (int i = 0; i < 5; i++)
        {
            std::cout << sp.liste[i] << std::endl;
        }
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;

        std::cout << "--------------" << std::endl;
        Span spp = Span(6);
        spp.addNumber(43);
        spp.addNumber(sp.liste.begin(), sp.liste.end());

        for (std::vector<int>::iterator i = spp.liste.begin(); i != spp.liste.end(); i++)
        {
            std::cout << *i << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}