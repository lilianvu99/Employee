//parent class
#include <iostream>
using namespace std;

#ifndef EMPLOYEE
#define EMPLOYEE

class Employee {
protected: //Every employee will have an ID, employee Type, Salary, profit share, and name.
    int employeeID;
    char employeeType;
    int salary;
    double profitShare;
    string name;
public: //These will allow us to get the variables of the employee
    int getID();
    char getType();
    int getSalary();
    float getShare();
    string getName();
    virtual float calculateSalary(int modifier); /*virtual function to calculate salary.
     every type of employee will have a different way to calculate their salary. other child functions will use this function*/
};

#endif
