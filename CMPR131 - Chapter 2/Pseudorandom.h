// Employee class
#pragma once
#ifndef PSEUDORANDOM_H
#define PSEUDORANDOM_H

#include <iostream>
#include <string>
#include <iomanip>
#include "input.h"
using namespace std;

class Pseudorandom
{
private:
    int multiplier;
    int seed;
    int increment;
    int modulus;
    const int REPETITIONS = 1000000;
    const double intervals = 10.0;
    char randomValues = 'U';

public:
    // Default Constructor
    Pseudorandom() : multiplier(0), seed(0), increment(0), modulus(0) {};

    // Constructor
    Pseudorandom(int mult, int inc, int mod, int s);
    // Mutaror
    void setSeed(int s);
    // Accessor
    int getSeed();
    // Generate and return the next number in the pseudorandom sequence
    int getNextSeed();
    // Generate and return the next number divided by the modulus
    double getUnifDis();

    // Process of the project 11, 12, 13 (Chapter 2)
    void mainProcess();
    
};


#endif // !PSEUDORANDOM_H