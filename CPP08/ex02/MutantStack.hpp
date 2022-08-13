#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void){};
        MutantStack(MutantStack const & copy) {};
        virtual ~MutantStack(void) {};

        MutantStack & operator=(MutantStack const & copy)
        {
            if (&copy != this)
                std::stack<T>::operator=(copy);
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(void) {return this->c.begin();};
        iterator end(void) {return this->c.end();};
};