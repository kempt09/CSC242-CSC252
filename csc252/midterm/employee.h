#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {

public:
  Employee();
  Employee(string a, double b, int c);
  const string getName();
  void setName(string a);
  const double getHourlyPay();
  void setHourlyPay(double a);
  const int getAge();
  void setAge(int a);
  bool isOlder(Employee a);
  virtual double weeksPay(double a);
  virtual const void print();

private:
  string name;
  double hourlyPay;
  int age;

};

#endif
