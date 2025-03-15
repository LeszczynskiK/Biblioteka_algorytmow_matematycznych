#pragma once

#ifndef SILNIA_HPP
#define SILNIA_HPP

#include <iostream>
#include <thread>
using namespace std;


class Silnia {
    public:
    Silnia(int n);//constructor
    ~Silnia();//destructor
        
        void countN();//count n! for n
        void printCountN();//print value
    
    private:
    long long scoreN;
    long long recurentiveCountN(int n);//private funciton for recurentive counting

    int range;
        
    };

#endif // SILNIA_HPP