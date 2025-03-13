#include "Komunikaty.hpp"

void delayProgram()
{
    for(int i=0;i<12500;i++)//iterate loop
    {
        for(int j=0;j<9999;j++)
        {
            //it will iterate and make delay...
            //this function is made to make "stops" between something
        }
    }
}

void welcomeText()
{
    cout<<"Witaj w programie skupiajacych w sobie wiele algorytmow matematycznych!"<<endl;
    delayProgram();
    cout<<"Za chwile wyswietli ci sie lista mozliwych algorytmow do wykonania..."<<endl;
    delayProgram();
    cout<<"Wybierz jeden z nich i postepuj zgodnie z instrukcja, ktora pojawi sie na ekranie!"<<endl;
    delayProgram();
}

AlgorithmManager::AlgorithmManager()//constructor...
{

}

AlgorithmManager::~AlgorithmManager()//destructor...
{

}

void AlgorithmManager::runProgram()
{
   int val;//number of case option

    //create class objects(empty so far, filled in funciton later)
    Silnia s1;//silnia object 

   delayProgram();
   cout<<"1. CiagFibonacciego - generowanie kolejnych liczb ciagu"<<endl;
   delayProgram();
   cout<<"2. MonteCarlo - aproksymacja liczby Pi"<<endl;
   delayProgram();
   cout<<"3. Silnia - obliczanie wartosci n!"<<endl;
   delayProgram();
   cout<<"4. SitoEratostenesa - wypisywanie liczb pierwszych"<<endl;
   delayProgram();
   cout<<"Wybierz wpisujac odpowiedni numer:"<<endl;
   delayProgram();
   cout<<"Numer: ";
   cin>>val;
   delayProgram();


   switch(val)//choose option 
   {
    case 1:
        cout<<"Wybrano: ciag fibonacciego!!!"<<endl;
    break; 
    
    case 2:
        cout<<"Wybrano:  monte carlo!!!"<<endl;
    break;

    case 3:
        int n;
        system("clear");
        cout<<"Wybrano:  silnia"<<endl;
        delayProgram();
        cout<<"Wprowadz n dla ktorego chcesz obliczyc n!"<<endl;
        delayProgram();
        cout<<"n= ";
        cin>>n;
        cout<<"Dla n="<<n<<" silnia wynosi: "<<s1.countN(n)<<endl;
    break;

    case 4:
        cout<<"Wybrano:  sito eratostenesa"<<endl;
    break;

    default:
        cout<<"Wybrano niepoprawna wartosc!"<<endl;
    break;

   };
    
}

int AlgorithmManager::getChoice()
{
    return choice;//return your choice
}

void AlgorithmManager::setChoice(int newChoice)
{
    choice = newChoice;//set to private variable...
}