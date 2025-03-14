#include "Komunikaty.hpp"

void delayProgram()
{
    for (int i = 0; i < 999; i++) // iterate loop
    {
        for (int j = 0; j < 999; j++)
        {
            // it will iterate and make delay...
            // this function is made to make "stops" between something
        }
    }
}

void longDelay(int i) // longer delay...
{
    for (int k = 0; k < i; k++)
    {
        delayProgram();
    }
}

void welcomeText()
{
    cout << "Witaj w programie skupiajacych w sobie wiele algorytmow matematycznych!" << endl;
    delayProgram();
    cout << "Za chwile wyswietli ci sie lista mozliwych algorytmow do wykonania..." << endl;
    delayProgram();
    cout << "Wybierz jeden z nich i postepuj zgodnie z instrukcja, ktora pojawi sie na ekranie!" << endl;
    delayProgram();
}

AlgorithmManager::AlgorithmManager() // constructor...
{

}

AlgorithmManager::~AlgorithmManager() // destructor...
{
    for (auto& t : threads) {//reference to threads object(from vector)
        if (t.joinable())//if there is any thread which is active(still joinable)
        { 
            t.join();//wait for this thread(so join him first, and then close program...)
        }
    }
}

void AlgorithmManager::runProgram()
{
    int val; // number of case option

    // create class objects(empty so far, filled in funciton later) - becouse i want to have them not only in case but need them more locally...
    // if created in case, it woult only work in case
    unique_ptr<Silnia> s1; // empty pointers so far
    unique_ptr<SitoEratostenesa> t1;
    unique_ptr<CiagFibonacciego> f1;
    unique_ptr<MonteCarlo> m1;

    delayProgram();
    cout << "1. CiagFibonacciego - generowanie kolejnych liczb ciagu" << endl;
    delayProgram();
    cout << "2. MonteCarlo - aproksymacja liczby Pi" << endl;
    delayProgram();
    cout << "3. Silnia - obliczanie wartosci n!" << endl;
    delayProgram();
    cout << "4. SitoEratostenesa - wypisywanie liczb pierwszych" << endl;
    delayProgram();
    cout << "5. Wyswietl wszystkie wyniki..." << endl;
    delayProgram();
    cout << "0. Zakoncz program!" << endl;
    delayProgram();

    cout << "Wybierz wpisujac odpowiedni numer:" << endl;
    delayProgram();
    cout << "Numer: ";
    cin >> val;
    delayProgram();

    switch (val) // choose option
    {
    case 0:
    {
        // clear vectors with scores
        silniaResults.clear();
        eratosResults.clear();
        monteResults.clear();
        figResults.clear();

        exit(0);
        break;
    }
    case 1:
    {
        system("clear");
        int numb; // amount of numbers to get
        cout << "Wybrano: ciag fibonacciego!!!" << endl;
        delayProgram();

        cout << "Ile liczb z ciagu chcesz otrzymac: " << endl;
        delayProgram();
        cout << "n= ";
        cin >> numb;

        thread t([this, numb]()
                 {
                     auto f1 = make_unique<CiagFibonacciego>(numb); // create object
                     f1->generateFib();                             // generate numbers (n numbers)
                     lock_guard<mutex> lock(mtx);                   // shared sources are save(threads management)
                     figResults.push_back(move(f1));                // push t to vector
                 });
        threads.push_back(move(t)); // calculations are in backgroun now... object is in thread vector type..
        break;
    }
    case 2:
    {
        int amount_of_trials;
        system("clear");
        cout << "Wybrano:  monte carlo!!!" << endl;
        delayProgram();

        cout << "Ile prob ma miec eksperyment: " << endl;
        delayProgram();

        cout << "Ilosc prob: ";
        cin >> amount_of_trials;

        delayProgram();
        m1 = make_unique<MonteCarlo>(amount_of_trials); // create object
        m1->runSimulation();                            // call simulation method

        cout << "Po " << amount_of_trials << " probach, estymacja Pi = ";
        m1->displayResult(); // show estimated PI

        break;
    }
    case 3:
    {
        int n;
        system("clear");
        cout << "Wybrano:  silnia" << endl;
        delayProgram();

        cout << "Wprowadz n dla ktorego chcesz obliczyc n!" << endl;
        delayProgram();
        cout << "n= ";
        cin >> n;

        s1 = make_unique<Silnia>(); // make object
        cout << "Dla n=" << n << " silnia wynosi: " << s1->countN(n) << endl;
        break;
    }
    case 4:
    {
        int temp; // put limit value here
        system("clear");
        cout << "Wybrano:  sito eratostenesa" << endl;
        delayProgram();

        cout << "Wprowadz granice dla ktorej chcesz wyswietlic liczby pierwsze!" << endl;
        delayProgram();
        cout << "lim= ";
        cin >> temp;

        t1 = make_unique<SitoEratostenesa>(temp); // create object with argument temp
        t1->generatePrimary();                    // find primary numbers in area
        cout << "Liczby pierwsze w przedziale: " << endl;
        t1->printPrimary();
        break;
    }
    case 5:
    {
        system("clear");
        cout << "Wyświetl wyniki!" << endl;

        for (auto &t : threads)
        {
            if (t.joinable())
            {
                t.join();
            }
        }
        threads.clear();

        lock_guard<mutex> lock(mtx);

        for (const auto &f : figResults)
        {
            cout << "Ciag Fibonacciego: ";
            f->displayFib();
            cout << endl;
        }

        // clear vectors is showed..
        silniaResults.clear();
        eratosResults.clear();
        monteResults.clear();
        figResults.clear();

        break;
    }
    default:

        cout << "Wybrano niepoprawna wartosc!" << endl;
        break;
    }
}

int AlgorithmManager::getChoice()
{
    return choice; // return your choice
}

void AlgorithmManager::setChoice(int newChoice)
{
    choice = newChoice; // set to private variable...
}

void nextAlgorithm()
{
    longDelay(3);
    cout << "----------------------------------------------------------" << endl;
    cout << endl;

    cout << "Czy chcesz przejsc do nowej karty?" << endl;
    delayProgram();

    string temp1;
    cout << "Wprowadz: " << endl;
    delayProgram();

    cout << "TAK" << endl;
    cout << "NIE" << endl;
    cout << endl;
    delayProgram();

    cout << "Wybor opcji: ";
    cin.ignore();//ignore new line char
    getline(cin, temp1); // read typed value

    // convert the entire string to uppercase(nie -> NIE)
    for (size_t i = 0; i < temp1.length(); i++)
    {
        temp1[i] = toupper(temp1[i]);
    }

    while (temp1 != "TAK" && temp1 != "NIE") // if typped value is not TAK and NIE
    {
        system("clear");
        delayProgram();
        cout << "Wprowadzono zla wartosc..." << endl;

        delayProgram();
        cout << "Zdecyduj jeszcze raz: " << endl;

        delayProgram();
        cout << "TAK" << endl;
        cout << "NIE" << endl;

        delayProgram();
        cout<<"Wybor: "<<endl;
        cin.ignore();//ignore new line char
        getline(cin, temp1);

        // convert the entire string to uppercase(nie -> NIE)
        for (size_t i = 0; i < temp1.length(); i++)
        {
            temp1[i] = toupper(temp1[i]);
        }
    }
    if (temp1 == "TAK")
    {
        cout << "Przechodzenie do nowej karty..." << endl;
        longDelay(3);
        system("clear");
    }
    else
    {
        system("clear");
        cout << "Koniec programu." << endl;
        delayProgram();

        for (int i = 3; i > 0; i--) // count 3,2,1 on screen and close program...
        {
            cout << i << endl;
            delayProgram();
        }

        exit(0); // finish program...
    }
}