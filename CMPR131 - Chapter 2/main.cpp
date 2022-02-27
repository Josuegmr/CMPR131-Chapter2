// date: 02/25/2022
// description: Chapter 2 - Assignment

#include <iostream>
#include <fstream>
#include <iomanip>
#include "input.h" // use for validate input
#include "Employee.h"
#include "Pseudorandom.h"
#include "List.h"



using namespace std;

// Prototype
int menuOption();
Employee empl;
// Returns number of times x occurs in arr[0..n - 1]
int countOccurrences(int arr[], int n, int x)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        if (x == arr[i])
            res++;
    return res;
}
int main()
{
    /* initialize random seed: */
    srand(time(NULL));
    do
    {
        switch (menuOption())
        {
        case 0: exit(1); break;
        case 1:
        {
            //empl.menuEmp();
        } break;
        case 2:
        {
            Pseudorandom pseudo;
            pseudo.mainProcess();

        } break;
        default: cout << "\n\tERROR - Invalid option. Please re-enter.\n"; break;
        }
        /*cout << "\n";
        system("pause");*/
    } while (true);

    return EXIT_SUCCESS;
}

// return a valid option (0...2)
int menuOption()
{
    cout << "\n\t=========================================================";
    cout << "\n\tCMPR131 Chapter 2 - ADT Assignments by Group 3";
    cout << "\n\t=========================================================";
    cout << "\n\t\t 1> List of Employees";
    cout << "\n\t\t 2> Pseudorandom";
    cout << "\n\t---------------------------------------------------------";
    cout << "\n\t\t 0> Exit";
    cout << "\n\t=========================================================\n";

    int option = inputInteger("\n\tOption: ", 0, 2);
    system("cls");

    return option;
}


