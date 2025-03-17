#include "GreatestCommonMeasure.hpp"

GreatestCommonMeasure::GreatestCommonMeasure(long long o1, long long o2) : first_number(o2), second_number(o2), GCMscore(0)
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
    // Euklides algorithm
    //  This algorithm finds the Greatest Common Divisor (GCD) of two numbers by repeatedly
    //  dividing the larger number by the smaller one and taking the remainder. The GCD of
    //  the original pair (a, b) is the same as the GCD of (b, remainder of a/b). This
    //  process continues until the remainder is 0, at which point the last non-zero

    // if number is negative, change it into positive...
    long long a = first_number > 0 ? first_number : -first_number;    // Set 'a' to the absolute value of first_number (handles negative inputs)
    long long b = second_number > 0 ? second_number : -second_number; // Set 'b' to the absolute value of second_number (handles negative inputs)

    while (b != 0)
    {                       // loop until b becomes 0, whichshows that the GCD is found
        long long temp = b; // store the current value of b in a temporary variable
        b = a % b;          // update b to the remainder of a divided by b (core step of Euclidean algorithm)
        a = temp;           // Update a to the previous value of b
    }

    GCMscore = a; // save counter score to variable
}

long long GreatestCommonMeasure::showScore() // show result of simulation
{
    return GCMscore;
}
