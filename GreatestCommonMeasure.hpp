#pragma once

#ifndef GREATESTCOMMONMEASURE_HPP
#define GREATESTCOMMONMEASURE_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include <string>

using namespace std;

class GreatestCommonMeasure
{
public:
    GreatestCommonMeasure(long long l1, long long l2); // constructor
    ~GreatestCommonMeasure();                          // destructor

    long long getFirstNumber();  // return 1st nr
    long long getSecondNumber(); // return 2nd nr

    void runComparison();  // simulation
    long long showScore(); // show result of greatest common measure

private:
    long long first_number;
    long long second_number;
    long long GCMscore; // result of greatest commpn measure
};

#endif // GREATESTCOMMONMEASURE_HPP