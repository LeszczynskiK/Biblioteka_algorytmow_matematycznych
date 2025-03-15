#pragma once

#ifndef KOMUNIKATY_HPP
#define KOMUNIKATY_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include <string>

#include "Silnia.hpp"
#include "SitoEratostenesa.hpp"
#include "MonteCarlo.hpp"
#include "CiagFibonacciego.hpp"

using namespace std;

void welcomeText();    // welcome text (begining of program working)
void delayProgram();   // delay any code
void longDelay(int i); // longer delay(delayprogram ran in loop)
void nextAlgorithm();

class AlgorithmManager
{
public:
    AlgorithmManager();  // constructor
    ~AlgorithmManager(); // destructor

    void runProgram();             // here we have case select etc.. full algorithm chooser
    int getChoice();               // to return choice value
    void setChoice(int newChoice); // to set choice value based on input

private:
    int choice; // number of algorithm to run

    vector<thread> threads; // threads
    mutex mtx;              // synchro threads(scores synchronisation)

    // scores kept in vector(each from own thread)
    vector<unique_ptr<Silnia>> silniaResults;           // Silnia results
    vector<unique_ptr<CiagFibonacciego>> figResults;    // Fibonacci results
    vector<unique_ptr<SitoEratostenesa>> eratosResults; // Eratostenes results
    vector<unique_ptr<MonteCarlo>> monteResults;        // Monte carlo results
};

#endif // KOMUNIKATY_HPP