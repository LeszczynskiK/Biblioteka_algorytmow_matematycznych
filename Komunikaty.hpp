#pragma once

#ifndef KOMUNIKATY_HPP
#define KOMUNIKATY_HPP

#include <iostream>
#include <thread>
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
};

#endif // KOMUNIKATY_HPP