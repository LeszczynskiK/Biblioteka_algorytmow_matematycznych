#pragma once

#ifndef SITOERATOSTENESA_HPP
#define SITOERATOSTENESA_HPP

#include <iostream>
#include <vector>
#include <thread>
using namespace std;

class SitoEratostenesa
{
public:
    SitoEratostenesa(int limit); // limit is number up to which we want to wind primany numbers
    ~SitoEratostenesa();

    void generatePrimary(); // wind primary numbers in area
    void printPrimary();    // print found primary numbers in area
    int returnLimit();//return limit max number in area

private:
    int limit_value;          // max value in area
    vector<bool> primary_web; // vector which has true or false(is primary number on index?)
};

#endif // SITOERATOSTENESA_HPP