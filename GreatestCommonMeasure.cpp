#include "GreatestCommonMeasure.hpp"

GreatestCommonMeasure::GreatestCommonMeasure(long long o1, long long o2) : first_number(o2), second_number(o2)
{

} // constructor

GreatestCommonMeasure::~GreatestCommonMeasure()
{

} // destructor

long long GreatestCommonMeasure::getFirstNumber() // return 1st nr
{
    return first_number;
}

long long GreatestCommonMeasure::getSecondNumber() // return 2nd nr
{
    return second_number;
}

void GreatestCommonMeasure::runComparison() // simulation of finding Greatest common measure
{
}

long long GreatestCommonMeasure::showScore() // show result of simulation
{
    return GCMscore;
}
