#include "pseudorandom.h"

// Constructor
Pseudorandom::Pseudorandom(int mult, int inc, int mod, int s)
{
    multiplier = mult;
    increment = inc;
    modulus = mod;
    seed = s;
}

// Process of the project 11, 12, 13 (Chapter 2)
void Pseudorandom::mainProcess()
{
    randomValues = inputChar("\n\tWould you like to use random numbers? (Y / N) ", 'Y', 'N');

    if (randomValues == 'Y')
    {
        // Generate random number between 1 and 10000
        multiplier = rand() % 100000 + 1;
        increment = rand() % 100000 + 1;
        modulus = rand() % 100000 + 1;
        seed = 1;
    }
    else if (randomValues == 'N')
    {
        // Input values
        multiplier = inputInteger("\n\tMultiplier: ", true);
        increment = inputInteger("\tIncrement: ", true);
        modulus = inputInteger("\tModulus: ", true);
        seed = inputInteger("\tSeed: ", true);
    }

    // Test 1 (Display the seed and the quantity of different numbers)
    cout << "\n\tTest 1 (Pseudorandom): ";
    cout << "\n\t\tSeed = " << seed << "\n";
    cout << "\n\t\tGenerated random " << modulus << " different numbers. \n";

    // Test 2 (Display a table of the numbers of ocurrences of 
    // the pseudo random divided by the modulus
    // in a specific range divided into the number of intervals)
    cout << "\n\tTest 2 (Pseudorandom): \n";
    cout << "\n\t\tMultiplier = " << multiplier << ", ";
    cout << "Increment = " << increment << ", ";
    cout << "Modulus = " << modulus << ", ";
    cout << "Seed = " << seed << "\n";

    // Header of the table 
    cout << setw(20) << left << "\n\tRange" << setw(10) << left << "Number of Ocurrences\n";
    cout << setprecision(1) << fixed; // Fixed decimals to one
    for (int i = 0; i < intervals; i++)
    {
        int countOcurrences = 0;
        // Display the range
        cout << "\n\t[" << i / intervals << " ... " << (i + 1.0) / intervals << setw(6) << left << ")";
        // Reset the seed
        setSeed(seed);
        for (int k = 0; k < REPETITIONS; k++)
        {

            // Count the ocurrences if the number is in the range
            if (getUnifDis() >= (i / 10.0) && getUnifDis() < ((i + 1.0) / 10.0))
                countOcurrences++;
            //cout << "\t" << pseudo.getNextSeed() << " - " << pseudo.getUnifDis() << "\n"; // test

            // Set the new seed
            setSeed(getNextSeed());
        }

        // Display the ocurrences
        cout << setw(10) << left << countOcurrences;
    }
    cout << endl;
}

// Mutaror
void Pseudorandom::setSeed(int s)
{
    seed = s;
}
// Accessor
int Pseudorandom::getSeed()
{
    return seed;
}
// Generate and return the next number in the pseudorandom sequence
int Pseudorandom::getNextSeed()
{
    int newSeed = (multiplier * seed + increment) % modulus;
    //cout << "\t" << seed << ' ';

    return newSeed;
}
// Generate and return the next number divided by the modulus
double Pseudorandom::getUnifDis()
{
    //cout << "\t" << newSeed / (double)modulus << '\n';

    return (getNextSeed() / (double)modulus);
}
