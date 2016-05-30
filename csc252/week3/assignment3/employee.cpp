#include "employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee(){
  name = "";
  salary = 0;
};

Employee::Employee(string a, int b){
   name = a;
   salary = b;
};

void Employee::setSalary(int a){
  salary = a;
}

const int Employee::getSalary(){
  return salary;
};

void Employee::setName(string a){
  name = a;
};

const string Employee::getName(){
  return name;
};

void Employee::print(){
  cout << "Employee Name: " << getName() << endl;
  cout << "Employee Salary: " << getSalary() << endl;
};
