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

const int Employee::getSalary(){
  return salary;
};

const string Employee::getName(){
  return name;
};

void Employee::print(){
  cout << "Employee Name: " << getName() << endl;
  cout << "Employee Salary: " << getSalary() << endl;
};

bool operator<(Employee& a, Employee& b){
  if(a.getSalary() < b.getSalary()){
    return false;
  } else {
    return true;
  }
};
