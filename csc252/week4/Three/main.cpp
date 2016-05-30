#include <iostream>
#include <vector>
#include "employee.h"
#include <string>

using namespace std;


int main(){

  vector <Employee> employees;
  employees.push_back(Employee("chris", 123321));
  employees.push_back(Employee("Whitney", 123321));
  employees.push_back(Employee("alex", 123321));
  employees.push_back(Employee("rob", 123321));

  for(int i = 0; i < employees.size(); i++){
    cout << employees[i];
  }

  return 0;

};
