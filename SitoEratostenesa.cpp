#include "SitoEratostenesa.hpp"

SitoEratostenesa::SitoEratostenesa(int limit) : limit_value(limit), primary_web(limit + 1, true) // vector with length of limit+1 filled all with true value(so far)
{

} // constructor

SitoEratostenesa::~SitoEratostenesa() {} // destructor

void SitoEratostenesa::generatePrimary() // find primary numbers in area limited with limit value
{
    primary_web[0] = false; // number 0 is not primary number(0 is on index 0)
    primary_web[1] = false; // number 1 is also not primary value to put false there...

    for (long long p = 2; p * p <= limit_value; p++) // begin with number p, and then iterate, we are looking for multiply of p, to limit is p*p
    {
        if (primary_web[p] == true)
        {                                                       // if true(so we did not cut from table number yet)
            for (long long i = p * p; i <= limit_value; i += p) // we need to cut at the begining square of p number(so i = p*p), then increase i value by next multiply of p
            {
                primary_web[i] = false; // this number is not primary, so put false
            }
        }
    }
}

void SitoEratostenesa::printPrimary() // display values fount in generatePrimary() method
{
    for (long long j = 2; j <= limit_value; j++)
    {
        if (primary_web[j] == true) // if value in table is true, means that there is primary value!
        {
            cout << j << " "; // display primary number(index is the same as primary number value, so print index!)
            // under primary_web by index, there is true or false so...
        }
    }
}

int SitoEratostenesa::returnLimit()
{
    return limit_value;
}
