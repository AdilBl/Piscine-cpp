#pragma once
#ifndef ALLCLASS_HPP
#define ALLCLASS_HPP


class Base
{
    public:
    Base(void);
    virtual ~Base(void);
};

Base::Base(void)
{
}

Base::~Base(void)
{
}

class A:public Base
{
    public:
        A(void);
        virtual ~A(void);
};

A::A(void)
{
    std::cout << "Constructor A" << std::endl;
}

A::~A(void)
{
}

class B:public Base
{
    public:
        B(void);
        virtual ~B(void);
};

B::B(void)
{
    std::cout << "Constructor B" << std::endl;
}

B::~B(void)
{
}

class C:public Base
{
    public:
        C(void);
        virtual ~C(void);
};

C::C(void)
{
    std::cout << "Constructor C" << std::endl;
}

C::~C(void)
{
}


#endif