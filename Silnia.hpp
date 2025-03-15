#pragma once

#ifndef SILNIA_HPP
#define SILNIA_HPP

#include <iostream>
#include <thread>
using namespace std;

class Silnia
{
public:
    Silnia(long long n); // constructor
    ~Silnia();           // destructor

    void countN();           // count n! for n
    void printCountN();      // print value
    long long returnRange(); // return n number

private:
    long long scoreN;
    long long recurentiveCountN(long long n); // private funciton for recurentive counting

    long long range;
};

#endif // SILNIA_HPP