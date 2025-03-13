#include <iostream>
#include <thread>

//include header files needed in project
#include "CiagFibonacciego.hpp"
#include "MonteCarlo.hpp"
#include "Silnia.hpp"
#include "SitoEratostenesa.hpp"
#include "Komunikaty.hpp"

using namespace std;

AlgorithmManager object1;//create object of class

int main()
{
    cout<<"--------------------------------------------------------------------------"<<endl;

    delayProgram();//wait before showing welcome text...
    welcomeText();//display welcome text...
    system("clear");//clear cmd
    object1.runProgram();


    return 0;
}