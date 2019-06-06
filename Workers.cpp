//child classes
#include "Employee.h"
#include <iostream>
using namespace std;

class Owner : public Employee { //child class owner taking from parent class Employee
public:
    Owner(string newName) { //constructor to access the protected members from parent class
      employeeType = 'O';
      salary = 15000;
      profitShare = 0.60;
      employeeID = 1;
      name = newName;
    }

    float calculateSalary(int modifier) { //from parent class virtual function
      return salary+(modifier*profitShare); //will return salary of child class owner
    }
};

class Chef : public Employee { //child class chef taking from parent class Employee
private:
    string specialty; //a new data member that parent class Employee did not have
public:
    Chef(string newName, string newSpecialty, int id) { //constructor to access parent class data members
      employeeType = 'C';
      salary = 10000;
      profitShare = 0.20;
      employeeID = id;
      name = newName;
      specialty = newSpecialty;
    }

    float calculateSalary(int modifier) { //virtual function from parent class
      return salary+(modifier*profitShare); //returning chef's salary
    }
    string getSpecialty() { //function to get the specialty of the chef : Thai, viet etc
      return specialty;
    }
};

class Waiter : public Employee { //child class waiter inheriting everything from parent class Employee
private:
    int yearsWorked; //child class waiter's own data member, not part of parent class
public:
    Waiter( string newName, int years, int id) { //constructor to get access right
      employeeType = 'W';
      salary = 3000;
      profitShare = 0.00;
      employeeID = id;
      name = newName;
      yearsWorked = years;
    }

    int getYearsWorked() { //function to get years worked of a life of a waiter
      return yearsWorked;
    }

    float calculateSalary(int modifier) { //virtual function from parent class
      return salary + modifier; //will return waiters salary
    }
};
