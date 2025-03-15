#pragma once

#ifndef MONTECARLO_HPP
#define MONTECARLO_HPP

#include <iostream>
#include <thread>
#include <random> //random generator for points
using namespace std;

class MonteCarlo
{
public:
    MonteCarlo(long long val);  // constructor
    ~MonteCarlo();              // destructor
    void runSimulation();       // run monte carlo simulation
    void displayResult();       // show result after simulation is done
    double singleTrial();       // single trial method
    long long returnTrialLim(); // return number of trials

private:
    long long num_trials; // number of trials
    double sim_result;    // value of Pi after simulation
};

#endif // MONTECARLO_HPP