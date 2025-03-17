cmake_minimum_required(VERSION 3.13) #min working version of cmake

#Project name
project(CMakeConf CXX)#CMakeConf can be the same as folder name but dont have to be

#set standard of c++ and c
set(CMAKE_CXX_STANDARD 14)#c++ version
set(CMAKE_C_STANDARD 99)#c version

#Sources
set(SOURCES
    main.cpp
    CiagFibonacciego.cpp
    Komunikaty.cpp
    MonteCarlo.cpp  
    Silnia.cpp 
    SitoEratostenesa.cpp 
    GreatestCommonMeasure.cpp
    PerfectNumber.cpp
    PrimeFactorization.cpp
)

# Heading files
set(HEADERS
    CiagFibonacciego.hpp
    Komunikaty.hpp
    MonteCarlo.hpp
    Silnia.hpp
    SitoEratostenesa.hpp
    GreatestCommonMeasure.hpp
    PerfectNumber.hpp
    PrimeFactorization.hpp
)

#Make executable file
add_executable(MyExecutable ${SOURCES} ${HEADERS})#file made based of sources and headers
#executable file is name MyExecutable, to to run program type ./MyExecutable

# Link pthread
target_link_libraries(MyExecutable pthread)