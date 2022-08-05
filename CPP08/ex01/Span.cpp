#include "Span.hpp"

Span::Span(unsigned int Maxsize)
{
    this->_max = Maxsize;
    return ;
}

Span::Span(Span const & copy)
{
    *this = copy;
    return ;
}

Span & Span::operator=(Span const & copy)
{
    if (&copy != this)
    {
        this->liste = copy.liste;
        this->_max = copy._max;
    }
    return *this;
}

Span::~Span(void)
{
    return ;
}

void Span::addNumber(int nb)
{
    if (this->_max < this->liste.size() + 1)
        throw std::exception();
    else
        this->liste.push_back(nb);
}

int Span::longestSpan(void) const
{
    if (this->liste.size() <= 1)
        throw std::exception();
    return(*std::max_element(this->liste.begin(), this->liste.end()) - *std::min_element(this->liste.begin(), this->liste.end()));
}

int Span::shortestSpan(void) const
{
    if (this->liste.size() <= 1)
        throw std::exception();
    std::vector<int> tamp = this->liste;
    std::sort(tamp.begin(), tamp.end());
    int min = tamp[1] - tamp[0];
    int k = tamp.size() - 2;
    for (int i = 0; i < k; i++)
    {
        if (tamp[i + 1] - tamp[i] < min)
            min = tamp[i + 1] - tamp[i];
    }
    return (min);
}