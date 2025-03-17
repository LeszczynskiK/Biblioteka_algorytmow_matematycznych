#include "PerfectNumber.hpp"

PerfectNumber::PerfectNumber(int i)
{
    limit_value =i;
} // constructor

PerfectNumber::~PerfectNumber()
{

} // destructor;

long long PerfectNumber::returnLimit() // max number to possibli find  - retrun opion
{
    return limit_value;
}

bool PerfectNumber::isPerfect(long long n)//to check if number is perfect
{
    //checks if a number is perfect by summing its proper divisors (excluding itself) and comparing the sum to the original number

    if (n <= 1) //if number is smaller than 1, then this number can not be perfect!
    {
        return false;//set bool to false
    }
    
    long long sum = 1; //1 is always a divisor of number(later it will be increased)
    for (long long i = 2; i * i <= n; i++) //loop(from 2 up to square root of n) through possible divisors up to square root of n(becouse maximum divisor of n is its square root)
    {
        if (n % i == 0) //if n divides throw i with 0 of rest
        {
            sum += i;//add i to sum since it is a proper divisor of n
            if (i * i != n) //if i is not the square root of n (to avoid double-counting when i*i equals n)
            { 
                sum += n / i;//add the paired divisor (n/i) to sum, because if i divides n, then n/i is also a divisor
            }
        }
    }
    return sum == n;//return true if sum of divisors equals original number, false otherwise
}

void PerfectNumber::startSimu() // simulation of perfect numbers
{
    for (long long i = 1; i <= limit_value; i++) //iterate from 1 to max number(check only positive values!)
    {
        if (isPerfect(i)) //if is perfect (check by helper function)
        {
            results_vector.push_back(i);//pus score to vector of scores
        }
    }
}

vector<long long> PerfectNumber::returnResultOfSimul() // to return values which are perfect numer to vector
{
    return results_vector;
}
