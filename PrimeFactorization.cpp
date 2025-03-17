#include "PrimeFactorization.hpp"

PrimeFactorization::PrimeFactorization(long long i)
{

    limit_value=i;
} // constructor

PrimeFactorization::~PrimeFactorization()
{

} // destructor;

long long PrimeFactorization::returnLimit() // return value of numbers we are dividing into its factors
{
    return limit_value;
}

void PrimeFactorization::startSimu() // simulation of factors finding
{    
    long long n = limit_value > 0 ? limit_value : -limit_value; //if number <0, handle it (we can also handle negative inputs)
    
    while (n % 2 == 0) //while number is divisible by 2
    {
        results_vector.push_back(2); //add 2 as a factor to the vector
        n /= 2; //divide the number by 2
    }//this part will be called first, we will divide by 2 up to get odd number
    
    //then we will get to odd numbers handling
    for (long long i = 3; i * i <= n; i += 2) //loop through odd numbers up to square root of n(starts with first odd number, different than 1),i+2, becouse work only on odd numbers
    {
        while (n % i == 0) //while i divides n evenly
        {
            results_vector.push_back(i); //add i as a factor to the vector
            n /= i; //divide the number by i
        }
    }
    
    //if there is number left, greater than 1 ->last factor of number
    if (n > 1) //if remaining n is greater than 1, its a prime factor itself
    {
        results_vector.push_back(n); //add the last factor to the vector
    }

    //result is number=factor1 * factor2 * ...
}

vector<long long> PrimeFactorization::returnResultOfSimul() // to return values which are factors of out number
{
    return results_vector;
}
