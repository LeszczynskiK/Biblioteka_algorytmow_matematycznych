#pragma once

#ifndef PRIMENUMBERS_HPP
#define PRIMENUMBERS_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class PrimeNumbers
{
public:
    PrimeNumbers(int i); // constructor
    ~PrimeNumbers();     // destructor;

    long long returnLimit();                 // max number to possibli find  - retrun opion
    void startSimu();                        // simulation of prime numbers
    vector<long long> returnResultOfSimul(); // to return values which are prime numer to vector

private:
    long long limit_value; // max nuber in area to possibli find

    vector<long long> results_vector; // to keep pprime numbers here
};

#endif // PRIMENUMBERS_HPP