#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>

using namespace std;

class Employee {

public:
  Employee();
  Employee(string a, int b);
  const string getName();
  const int getSalary();
  void print();
  friend ostream &operator<<(ostream& out, Employee& person);

private:
  string name;
  int salary;
};

#endif
