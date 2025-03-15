#include "CiagFibonacciego.hpp"

CiagFibonacciego::CiagFibonacciego(int val) : limit_val(val), fib_values(val + 1, 1) // temporarly create vector with length of val+1 willed with 1(so rar)
{
    fib_values[0] = 0;
    // 2nd  element is 1 so dont change it...

} // constructor

CiagFibonacciego::~CiagFibonacciego()
{

} // destructor

void CiagFibonacciego::generateFib()
{
    if (limit_val > 1) // if leghtn you want to count is bigger than 1
    {
        for (int i = 2; i < limit_val; ++i) // iterate from 2 up to limit
        {
            fib_values[i] = fib_values[i - 1] + fib_values[i - 2]; // next fibonaci value is equal to previous plus previous previous
        }
    }
}

int CiagFibonacciego::returnLimit()
{
    return limit_val;
}

void CiagFibonacciego::displayFib()
{
    int iter_numb = 0;
    for (long long temp : fib_values) // iterate throw vector...
    {
        iter_numb++; // increate number of iterations
        if (iter_numb <= limit_val)
        {
            cout << temp << " "; // print values from vector
        }
        else
        {
            break;
        }
    }
    cout << endl;
}