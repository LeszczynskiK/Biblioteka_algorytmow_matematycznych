#include "Silnia.hpp"

Silnia::Silnia(long long n) // constructor
{
    range = n;
}

Silnia::~Silnia() // destructor
{
}

void Silnia::countN() // use recurentive function to count
{
    scoreN = recurentiveCountN(range);
}

long long Silnia::recurentiveCountN(long long n)
{ // used for recurentive call
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * recurentiveCountN(n - 1);
}

void Silnia::printCountN() // only return value that was counted before..
{
    cout << scoreN;
}

long long Silnia::returnRange()
{
    return range;
}