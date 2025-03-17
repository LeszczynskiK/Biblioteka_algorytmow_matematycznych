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
}

vector<long long> PrimeFactorization::returnResultOfSimul() // to return values which are factors of out number
{
    return results_vector;
}
