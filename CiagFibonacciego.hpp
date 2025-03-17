#pragma once

#ifndef CIAGFIBONACCIEGO_HPP
#define CIAGHIBONACCIEGO_HPP

#include <iostream>
#include <thread>
#include <vector>
using namespace std;

class CiagFibonacciego
{
public:
    CiagFibonacciego(int val); // constructor
    ~CiagFibonacciego();       // destructor

    void generateFib(); // generate fibonacci - limit numbers generated
    void displayFib();  // display limit numbers which you generated in generateFib method
    int returnLimit();

private:
    vector<long long> fib_values; // fibbonaci values kept in vector (limit numbers generated will be stored here)
    int limit_val;                // amount of numbers to generate
};

#endif // CIAGFIBONACCIEGO_HPP