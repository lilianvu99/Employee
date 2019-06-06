//driver.cpp
#include "workers.cpp"
#include <iostream>

using namespace std;

int main() {
//EMPLOYEE INITIALIZATION
Employee *employeeData[6] = { //an array of pointers pointing to Employee objects
    new Owner("Lilian"), new Chef("David", "Vietnamese", 2), new Chef("Jennifer", "Thai", 3),
    new Waiter("Lisa", 3, 4), new Waiter("Luan", 2, 5), new Waiter("Ami", 4, 6)
};

//EMPLOYEE ROSTER
cout << "Employee Roster: " << endl;
cout << "--------------------"<< endl;
for(int i = 0; i <= 5; i++) {
    cout << i+1 <<") " << employeeData[i]->getName() << " : " << employeeData[i]->getType() << endl;
    cout << "\t Salary: $" << employeeData[i]->getSalary() << endl;
    if(employeeData[i]->getType() == 'C')
      cout << "\t Specialty: " << ((Chef*)employeeData[i])->getSpecialty() << endl; //specifying for compiler to go look to use specialty from chef child class
    if(employeeData[i]->getType() == 'W')
      cout << "\t Years Worked: " << ((Waiter*)employeeData[i])->getYearsWorked() << endl; //specifying for compiler to know where to look for function years worked
    cout << endl;

}

cout << endl;

//MONTHLY REPORT
cout << "End of Month report:" << endl;
cout<< "Profits: $6000" << endl;
cout << "--------------------" << endl;

//CHEFS/OWNERS
for(int i=0; i<3; i++) {
    cout << i+1 <<") " << employeeData[i]->getName() << " : " << employeeData[i]->getType() << endl;
    cout << "\t Salary: $" << employeeData[i]->getSalary() << endl;
    cout << "\t Profit Share: %" << employeeData[i]->getShare() << endl;
    cout << "\t Net Pay: $" << employeeData[i]->calculateSalary(6000) << endl;
    cout << endl;
}

//WAITERS
cout << "4) " << employeeData[3]->getName() << " : " << employeeData[3]->getType() << endl;
cout << "\t Salary: $" << employeeData[3]->getSalary() << endl;
cout << "\t Tips earned: $3000" << endl; //couldve used for loop like chefs and owners but tips earned numbers are different
cout << "\t Net Pay: $" << employeeData[3]->calculateSalary(1000) << endl;
cout << endl;

cout << "5) " << employeeData[4]->getName() << " : " << employeeData[4]->getType() << endl;
cout << "\t Salary: $" << employeeData[4]->getSalary() << endl;
cout << "\t Tips earned: 3500" << endl;
cout << "\t Net Pay: $" << employeeData[4]->calculateSalary(1500) << endl;
cout << endl;

cout << "6) " << employeeData[5]->getName() << " : " << employeeData[5]->getType() << endl;
cout << "\t Salary: $" << employeeData[5]->getSalary() << endl;
cout << "\t Tips earned: $4700" << endl;
cout << "\t Net Pay: $" << employeeData[5]->calculateSalary(1700) << endl;
cout << endl;

cout << "Conclusion of Report"<< endl; //the end
cout << endl;
}
