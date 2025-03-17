#pragma once

#ifndef PRIMEFACTORIZATION_HPP
#define PRIMEFACTORIZATION_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class PrimeFactorization
{
public:
    PrimeFactorization(long long i); // constructor
    ~PrimeFactorization();     // destructor;

    long long returnLimit();                 // return value of number to refactore
    void startSimu();                        // simulation of finding factors of number
    vector<long long> returnResultOfSimul(); // to return values which are factors of number

private:
    long long limit_value; // value to look for factors of

    vector<long long> results_vector; // to keep factors here in vector
};

#endif // PRIMEFACTORIZATION_HPP