#include "employee.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  // vector for employees
  vector<Employee> myList(3);

  //initialize employees
  Employee jane("Jane Doe", "m", 3);
  Employee john("John Doe", "m", 5);
  Employee whitney("Whitney Smith", "s", 1);

  // set hourly pay
  jane.setHourlyPay(35);
  john.setHourlyPay(25);
  whitney.setHourlyPay(45);

  //set hours worked
  jane.setHoursWorked(40);
  john.setHoursWorked(42);
  whitney.setHoursWorked(34);

  jane.setTaxRate(0.15);
  john.setTaxRate(0.08);
  whitney.setTaxRate(0.25);

  // add employees to vector
  myList[0] = jane;
  myList[1] = john;
  myList[2] = whitney;

  for (int i = 0; i < myList.size(); i++){
    cout << myList[i].getEmployeeInfo() << endl;
  }

  Employee *ptr1 = NULL;
  Employee *ptr2 = NULL;
  Employee myE("Pointy McPointer", "m", 1);
  ptr1 = &myE;
  ptr1 -> setDependents(10);

  ptr2 = new Employee("Dynamic Dyno", "m", 2);

  // Print out of both Pointers
  cout << ptr1 -> getEmployeeInfo() << endl;
  cout << ptr2 -> getEmployeeInfo() << endl;

  // Reset ptr2
  ptr2 = NULL;

  ptr2 = &myE;
  cout << ptr2 -> getEmployeeInfo() << endl;

  return 0;

};
