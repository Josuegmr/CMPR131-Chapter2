// Employee class
#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <list>
#include "input.h"
using namespace std;

class Employee
{
private:
    int Emp_id;
    char Emp_status;
    string Emp_name;
    string Emp_surname;
    string Emp_dateBirth;
    string Emp_dateDeath;

public:
    // Default Constructor
    Employee() : Emp_id(0), Emp_status('I'), Emp_name("Unknown"), Emp_surname("Unknown"), Emp_dateBirth("Unknown"), Emp_dateDeath("Unknown") {};
};


#endif // !EMPLOYEE_H