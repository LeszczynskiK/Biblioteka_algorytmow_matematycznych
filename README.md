# Biblioteka_algorytmow_matematycznych

Ten projekt to kolekcja zaawansowanych algorytmów matematycznych zaimplementowanych w języku C++        
z wykorzystaniem wielowątkowości w celu optymalizacji czasu obliczeń w przypadku wielu obliczeń na raz.     
Przydatne jest to szczególnie wtedy, gdy każde z obliczeń zajmuje sporo czasu.      
Przy wykorzystaniu wątków wykonywane sa one równolegle, co skraca czas działania.   

Użytkownik może wybrać jeden z dostępnych algorytmów i uruchomić jego obliczenia.   

Algorytmy:      
1. Sito Eratostenesa – szybkie znajdowanie liczb pierwszych.    
2. Silnia – obliczanie wartości n!.     
3. Ciąg Fibonacciego – generowanie kolejnych liczb ciągu.   
4. Metoda Monte Carlo – aproksymacja liczby pi. 
5. Największy wspólny dzielnik - algorytm euklidesa
6. Rozkład na czynniki pierwsze
7. Liczby doskonałe


Technologie:    
C++     
Wielowątkowość (thread,mutex,lock_guard,vector< thread>)    
Obsługa wejścia/wyjścia  (wprowadzanie wartości w celu wywołania funkcji z konkretnym argumentem)   

Użytkownik na wstepie wybiera algorytm, który chce uruchomić,           
a nastepnie podąża za instrukcjami wypisanymi w terminalu.      

Podążając za instrukcją wyświetloną, użytkownik wpisuje w terminalu to o co jest proszony,      
a obliczenia liczone są "w tle". Wyświetlone sa one w przypadku gdy użytkownik o nie "poprosi". 
Wtedy wyświetlane sa od razu wszystkie przypadki.   

