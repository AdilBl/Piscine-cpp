#include <iostream>
#include <vector>
# include <algorithm>
# include <set>

class Span
{
    private:
        unsigned int _max;

    public:

        Span(unsigned int maxSize);
        Span(Span const & copy);
        virtual ~Span(void);

        std::vector<int> liste;

        void addNumber(int nb);
        int shortestSpan(void) const;
        int longestSpan(void) const;

        Span & operator=(Span const & copy);
        template <typename T>
        void addNumber(T start, T end)
        {
            if (this->_max < std::distance(start, end) + this->liste.size())
                throw std::exception();
            this->liste.insert(this->liste.end(), start, end);
        }
};
