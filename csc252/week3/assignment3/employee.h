#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {

public:
  Employee();
  Employee(string a, int b);
  const string getName();
  void setName(string a);
  const int getSalary();
  void setSalary(int a);
  void print();


private:
  string name;
  int salary;
};

#endif
