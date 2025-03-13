#include "Silnia.hpp"

Silnia::Silnia()//constructor
{

}

Silnia::~Silnia()//destructor
{

}

long long Silnia::countN(int n)
{
    if(n<0)
    {
        cout<<"Cant count n! for n<0!"<<endl;
        return -1;
    }


    if(n == 1 || n == 0)
    {
        return 1;//n! for n =0 or 1 is 1
    }
    else
    {
    return n*countN(n-1);//recurentive counting n!
    }
    return -1;//it will never happen... if function is not void, have to return sth
}