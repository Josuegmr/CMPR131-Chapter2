// List class
#pragma once
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include <list>
#include "input.h"
using namespace std;

class List
{
private:
    string fileName = "";

public:
    // Default Constructor
    List() : fileName("") {};
    // Menu
    void menuEmp()
    {
        do
        {
            cout << "\n\t1> List of Employees";
            cout << "\n\t====================================================================";
            cout << "\n\t\t A> Read data from file and store into a list";
            cout << "\n\t\t B> Insert a new employee record into the list";
            cout << "\n\t\t C> Update an employee record from the list";
            cout << "\n\t\t D> Display all, active or inactive employee records from the list";
            cout << "\n\t\t E> Write data from the list to a file";
            cout << "\n\t--------------------------------------------------------------------";
            cout << "\n\t\t 0> Exit";
            cout << "\n\t====================================================================\n";

            int option = inputChar("\n\tOption: ");
            system("cls");
            if (option == '0') break;

            cout << "\n";
            switch (option)
            {
            case 'A': /*readDataFile();*/ break;
            case 'B': break;
            case 'C': break;
            case 'D': break;
            case 'E': break;

            default: cout << "\tERROR - Invalid option. Please re-enter.\n"; break;
            }
        } while (true);
    }
};


#endif // !LIST_H