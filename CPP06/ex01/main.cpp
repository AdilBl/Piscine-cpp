#include "header.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *a = new Data();
    Data *b;
    uintptr_t test;

    std::cout << "Adresse: " << a << std::endl;
    a->printdata();
    test = serialize(a);
    std::cout << "Serialize ----" << std::endl;
    std::cout << test << std::endl;
    std::cout << "Deserialize ----" << std::endl;
    b = deserialize(test);
    b->printdata();
    std::cout << "Adresse: " << b << std::endl;
    delete(a);
}