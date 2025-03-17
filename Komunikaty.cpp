#include "Komunikaty.hpp"

void delayProgram()
{
    for (int i = 0; i < 9999; i++) // iterate loop
    {
        for (int j = 0; j < 9999; j++)
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
    system("clear");
    cout << "Witaj w programie skupiajacych w sobie wiele algorytmow matematycznych!" << endl;
    cout << "Za chwile wyswietli ci sie lista mozliwych algorytmow do wykonania..." << endl;
    cout << "Wybierz jeden z nich i postepuj zgodnie z instrukcja, ktora pojawi sie na ekranie!" << endl;
    longDelay(5);
}

AlgorithmManager::AlgorithmManager() // constructor...
{
}

AlgorithmManager::~AlgorithmManager() // destructor...
{
    for (auto &t : threads)
    {                     // reference to threads object(from vector)
        if (t.joinable()) // if there is any thread which is active(still joinable)
        {
            t.join(); // wait for this thread(so join him first, and then close program...)
        }
    }
}

void AlgorithmManager::runProgram()
{
    int val; // number of case option

    // create class objects(empty so far, filled in funciton later) - becouse i want to have them not only in case but need them more locally...
    // if created in case, it woult only work in case
    unique_ptr<Silnia> s1; // empty  smart pointers so far
    unique_ptr<SitoEratostenesa> e1;
    unique_ptr<CiagFibonacciego> f1;
    unique_ptr<MonteCarlo> m1;
    unique_ptr<GreatestCommonMeasure> g1;
    unique_ptr<PerfectNumber> p1;
    unique_ptr<PrimeFactorization> p2;

    system("clear");
    cout << "1. CiagFibonacciego - generowanie kolejnych liczb ciagu" << endl;
    cout << "2. MonteCarlo - aproksymacja liczby Pi" << endl;
    cout << "3. Silnia - obliczanie wartosci n!" << endl;
    cout << "4. SitoEratostenesa - wypisywanie liczb pierwszych" << endl;
    cout << "5. Najwiekszy wspolny dzielnik - algorytm euklidesa" << endl;
    cout << "6. Liczby doskonałe - generowanie ciągu " << endl;
    cout << "7. Rozklad na czynniki pierwsze " << endl;
    cout << "8. Wyswietl wszystkie wyniki..." << endl;
    cout << "0. Zakoncz program!" << endl;

    cout << endl;
    cout << "Wybierz wpisujac odpowiedni numer:" << endl;
    cout << "Numer: ";
    cin >> val;

    switch (val) // choose option
    {
    case 0:
    {
        // clear vectors with scores
        silniaResults.clear();
        eratosResults.clear();
        monteResults.clear();
        figResults.clear();
        GCMresults.clear();
        factorsResults.clear();
        perfectResults.clear();

        exit(0);
        break;
    }
    case 1:
    {
        system("clear");
        int numb; // amount of numbers to get
        cout << "Wybrano: ciag fibonacciego!!!" << endl;
        cout << "Ile liczb z ciagu chcesz otrzymac: " << endl;
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
        cout << "Ile prob ma miec eksperyment: " << endl;
        cout << "Ilosc prob: ";
        cin >> amount_of_trials;

        thread t1([this, amount_of_trials]()
                  {
                      auto m1 = make_unique<MonteCarlo>(amount_of_trials); // create object with argument
                      m1->runSimulation();                                 // start method to ruj smulation
                      lock_guard<mutex> lock(mtx);                         // save shared sources from multiacces
                      monteResults.push_back(move(m1));                    // push to scores vector
                  });
        threads.push_back(move(t1)); // add this object to vector based on threads ... each counting is made in own thread!
        break;
    }
    // funcitonality below (all in case) is the same as commented in case 2...
    case 3:
    {
        int n;
        system("clear");
        cout << "Wybrano:  silnia" << endl;
        cout << "Wprowadz n dla ktorego chcesz obliczyc n!" << endl;
        cout << "n= ";
        cin >> n;
        while (n > 20)
        {
            system("clear");
            cout << "Wprowadzana wartosc przekracza maksymalny zakres(20)..." << endl;
            cout << "Wprowadz wartosc ponownie: ";
            cin >> n;
        }

        thread t2([this, n]()
                  {
           auto s1 = make_unique<Silnia>(n);
           s1->countN();
           lock_guard<mutex> lock(mtx);

           silniaResults.push_back(move(s1)); });
        threads.push_back(move(t2));

        break;
    }
    case 4:
    {
        int temp; // put limit value here
        system("clear");
        cout << "Wybrano:  sito eratostenesa" << endl;
        cout << "Wprowadz granice dla ktorej chcesz wyswietlic liczby pierwsze!" << endl;
        cout << "lim= ";
        cin >> temp;

        thread t3([this, temp]()
                  {
           auto e1 = make_unique<SitoEratostenesa>(temp);
            e1->generatePrimary();

            lock_guard<mutex> lock(mtx);
            eratosResults.push_back(move(e1)); });
        threads.push_back(move(t3));
        break;
    }
    case 5:
    {
        long long nr1, nr2; // number one and two to find its greatest common measure
        system("clear");
        cout << "Wybrano: najwiekszy wspolny dzielnik" << endl;
        cout << "Wprowadz liczby na ktorych chcesz operowac!" << endl;
        cout << "Liczba1: ";
        cin >> nr1;
        cout << endl;
        cout << "Liczba2: ";
        cin >> nr2;
        cout << endl;

        thread t4([this, nr1, nr2]()
                  {
           auto g1 = make_unique<GreatestCommonMeasure>(nr1,nr2);
            g1->runComparison();
            lock_guard<mutex> lock(mtx);
            GCMresults.push_back(move(g1)); });
        threads.push_back(move(t4));

        break;
    }
    case 6:
    {
        long long lim11; // limit of prfect number to look for in area
        system("clear");
        cout << "Wybrano: ciag liczb doskonalych" << endl;
        cout << "Wprowadz granice ciagu ktory chcesz wypisac!" << endl;
        cout << "Granica: ";
        cin >> lim11;
        cout << endl;

        thread t5([this, lim11]()
                  {
            auto p1 = make_unique<PerfectNumber>(lim11);
             p1->startSimu();
             lock_guard<mutex> lock(mtx);
            perfectResults.push_back(move(p1)); });
        threads.push_back(move(t5));

        break;
    }
    case 7:
    {
        int first1; // numer which we are looking for factor to divide into
        system("clear");
        cout << "Wybrano: rozklad na czynniki pierwsze " << endl;
        cout << "Wprowadz liczbe, ktora chcesz podzielnic na czynniki pierwsze!" << endl;
        cout << "Liczba: ";
        cin >> first1;
        cout << endl;

        thread t6([this, first1]()
                  {
            auto p2 = make_unique<PrimeFactorization>(first1);
             p2->startSimu();
             lock_guard<mutex> lock(mtx);
            factorsResults.push_back(move(p2)); });
        threads.push_back(move(t6));

        break;
    }
    case 8:
    {
        system("clear");
        cout << "Wyświetl wyniki!" << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        cout << "Liczenie";

        for (auto &t : threads)
        {
            cout << ".";
            if (t.joinable())
            {
                t.join();
            }
        }
        cout << endl
             << endl
             << endl; // make bigger space to see results better

        threads.clear();
        system("clear");

        lock_guard<mutex> lock(mtx);

        cout << "----------------------------------------------------------" << endl;
        cout << endl;

        // made by iteration throw vector with counted scores...
        for (const auto &f : figResults) // show couner results for fibonacci
        {
            cout << "Ciag Fibonacciego(skladajacy sie z  " << f->returnLimit() << " liczb), to: ";
            f->displayFib();
            cout << endl
                 << endl;
        }

        for (const auto &s : silniaResults) // show couner results for silnia
        {
            cout << "Silnia(z liczby " << s->returnRange() << "), to:";
            s->printCountN();
            cout << endl
                 << endl;
        }

        for (const auto &e : eratosResults) // show couner results for erastos
        {
            cout << " Sito eratostenesa(do max liczby " << e->returnLimit() << "), to:";
            e->printPrimary();
            cout << endl
                 << endl;
        }

        for (const auto &m : monteResults) // show couner results for monte
        {
            cout << "Monte carlo(dla " << m->returnTrialLim() << " eksperymentow), to:";
            m->displayResult();
            cout << endl;
        }

        for (const auto &g : GCMresults) // show greatest common measure results
        {
            cout << "Najwiekszy wspolny dzielnik dla: " << g->getFirstNumber() << " i " << g->getSecondNumber() << ", to:";
            cout << g->showScore();
            cout << endl;
        }

        for (const auto &pp1 : factorsResults) // show factirs
        {
            cout << "Czynniki pierwsze z liczby: " << pp1->returnLimit() << ", to:";
            vector<long long> prime = pp1->returnResultOfSimul();

            for (long long p1 : prime) // iterate throw vector of scores and then print each single score..
            {
                cout << p1 << " ";
            }

            cout << endl;
        }

        for (const auto &pp2 : perfectResults) // show eprfect results
        {
            cout << "Liczby doskonale do liczby: " << pp2->returnLimit() << ", to:";
            vector<long long> perfect = pp2->returnResultOfSimul();

            for (long long p2 : perfect) // iterate throw vector of scores and then print each single score..
            {
                cout << p2 << " ";
            }

            cout << endl;
        }

        cout << "----------------------------------------------------------" << endl;
        cout << endl;
        cout << "Przejscie do nowej karty wyczysci wyniki... " << endl;
        cout << endl;

        // clear vectors is showed..
        silniaResults.clear();
        eratosResults.clear();
        monteResults.clear();
        figResults.clear();
        GCMresults.clear();
        factorsResults.clear();
        perfectResults.clear();

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
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
    cout << "Czy chcesz przejsc do nowej karty?" << endl;

    string temp1;
    cout << "Wprowadz: " << endl;
    cout << "TAK" << endl;
    cout << "NIE" << endl;
    cout << endl;

    cout << "Wybor opcji: ";
    cin >> temp1; // get value(to decide is you wan to get to new card or no)

    // convert the entire string to uppercase(nie -> NIE)
    for (size_t i = 0; i < temp1.length(); i++)
    {
        temp1[i] = toupper(temp1[i]);
    }

    while (temp1 != "TAK" && temp1 != "NIE") // if typped value is not TAK and NIE
    {
        system("clear");
        cout << "Wprowadzono zla wartosc..." << endl;
        cout << "Zdecyduj jeszcze raz: " << endl;
        cout << "TAK" << endl;
        cout << "NIE" << endl;

        cout << "Wybor: " << endl;
        cin >> temp1;

        // convert the entire string to uppercase(nie -> NIE)
        for (size_t i = 0; i < temp1.length(); i++)
        {
            temp1[i] = toupper(temp1[i]);
        }
    }
    if (temp1 == "TAK")
    {
        cout << "Przechodzenie do nowej karty..." << endl;
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