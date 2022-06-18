#include <iostream>
#include <string>

template <typename T>

class Array
{
    private:
        T * array;
    public:
        unsigned int sizearray;

        Array(void)
        {
            this->array = new T [1];
            this->array[0] = 0;
            this->sizearray = 1;
            return;
        }

        Array(unsigned int n)
        {
            this->array = new T[n];
            for (unsigned int i = 0; i < this->sizearray; i++)
            {
                this->array[i] = 0; 
            }
            this->sizearray = n;
        }

        Array(Array const & copy)
        {
            this->array = new T[copy.sizearray];
            for (unsigned int i = 0; i < copy.sizearray; i++)
            {
                this->array[i] = copy.array[i]; 
            }
            this->sizearray = copy.sizearray;
            return ;
        }


        T & operator[](unsigned int n)
        {
            if (n >= this->sizearray + 1)
                throw std::exception();
            else
                return (this->array[n]);
        }

        Array & operator=(Array const & copy)
        {
            int i = 0;
            if (&copy != this)
            {
                delete [] this->array;
                i = 0;
                this->array = new T [copy.sizearray];
                while (i < copy.sizearray)
                {
                    this->array[i] = copy.array[i]; 
                    i++;
                }
                this->sizearray = copy.sizearray;
            }
            return *this;
        }
        
        unsigned int size(void)
        {
            return (this->sizearray);
        }

        virtual ~Array(void)
        {
            delete [] this->array;
        }
};

