#include <iostream>
#include <thread>
#include <memory>

//include header files needed in project
#include "CiagFibonacciego.hpp"
#include "MonteCarlo.hpp"
#include "Silnia.hpp"
#include "SitoEratostenesa.hpp"
#include "Komunikaty.hpp"

using namespace std;

unique_ptr<AlgorithmManager> object1 = make_unique<AlgorithmManager>();//smart pointer based on AlgorithmManager class

int main()
{
    while(true){//infinite loop
        cout<<"--------------------------------------------------------------------------"<<endl;
        delayProgram();//wait before showing welcome text...
        welcomeText();//display welcome text...
        system("clear");//clear cmd
        object1->runProgram();
        longDelay(3);
        system("clear");//clear cmd
    }


    return 0;
}