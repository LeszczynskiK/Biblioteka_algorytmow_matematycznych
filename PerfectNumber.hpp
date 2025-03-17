#pragma once

#ifndef PERFECTNUMBER_HPP
#define PERFECTNUMBER_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class PerfectNumber
{
public:
    PerfectNumber(int i); // constructor
    ~PerfectNumber();     // destructor;

    long long returnLimit();                 // max number to possibli find  - retrun opion
    bool isPerfect(long long n);             // helper function to check if number is perfect
    void startSimu();                        // simulation of perfect numbers
    vector<long long> returnResultOfSimul(); // to return values which are perfect numer to vector

private:
    long long limit_value; // max nuber in area to possibli find

    vector<long long> results_vector; // to keep perfect numbers here
};

#endif // PERFECTNUMBER_HPP