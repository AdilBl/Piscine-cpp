#include <iostream>
#include <string>

template < typename T >

T   max(T const & x, T const & y)
{
    return( x>=y ? x : y);
}

template < typename T >

T   min(T const & x, T const & y)
{
    return( x<=y ? x : y);
}

template < typename T >

void    swap(T & x, T  & y)
{
    T  tamp;

    tamp = y;
    y = x;
    x = tamp;
    return;
}
