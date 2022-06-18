#include "header.hpp"

Base * generate(void)
{
    std::srand(std::time(0));
    int randomNB = std::rand() % 3;

    switch (randomNB)
    {
        case 0:
            return(new A);
            break;

        case 1:
            return(new B);
            break;

        case 2:
            return(new C);
            break;
    }
    return (nullptr);
}

void identify (Base *p)
{
    A * testA = dynamic_cast<A *>(p);
    B * testB = dynamic_cast<B *>(p);
    C * testC = dynamic_cast<C *>(p);
    if (testA)
        std::cout << "Its A" << std::endl;
    else if (testB)
        std::cout << "Its B" << std::endl;
    else if (testC)
        std::cout << "Its C" << std::endl;
    else
        std::cout << "Identify Fail" << std::endl;
}

void identify(Base & p)
{
    try
    {
        A & test = dynamic_cast<A &>(p);
        std::cout << "Its A" << std::endl;
        (void) test;
        return ;
    }
    catch (std::bad_cast & e){}
    try
    {
        B & test = dynamic_cast<B &>(p);
        std::cout << "Its B" << std::endl;
        (void) test;
        return ;
    }
    catch (std::bad_cast & e){}
    try
    {
        C & test = dynamic_cast<C &>(p);
        std::cout << "Its C" << std::endl;
        (void) test;
        return ;
    }
    catch (std::bad_cast & e)
    {
        std::cout << "Identify Fail" << std::endl;
    }
}

int main()
{
    Base * Test = generate();
    identify(Test);
    identify(* Test);
    return (0);
}