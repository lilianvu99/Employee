//employee.cpp file defines parent functions to call the protected members
#include "Employee.h"
using namespace std;

int Employee::getID() { //getting what employee id number is
return employeeID; //protected member
}
char Employee::getType() { //getting what employee type is: chef, owner, waiter
return employeeType; //protected member
}
int Employee::getSalary() { //getting what the salary is for employee
return salary; //protected member
}
float Employee::getShare() { //getting the employee profit shares: 60%, 20% etc
return profitShare; //protected member
}
string Employee::getName() { //getting employee name
return name; //protected member
}
float Employee::calculateSalary(int modifier){} //virtual function
