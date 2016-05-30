#include <iostream>
#include <vector>
#include "employee.h"
#include <string>

using namespace std;


int main(){

  vector <Employee> employees;
  employees.push_back(Employee("chris", 123321));
  employees.push_back(Employee("Whitney", 3321));
  employees.push_back(Employee("alex", 321));
  employees.push_back(Employee("rob", 123321));

  bool isTrue = employees[0] < employees[1];
  cout << isTrue << endl;

  bool isFalse = employees[2] < employees[3];
  cout << isFalse << endl;

  return 0;

};
