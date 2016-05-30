#include "employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee(){
  name = "";
  hourlyPay = 0.00;
  age = 0;
};

Employee::Employee(string a, double b, int c){
   name = a;
   hourlyPay = b;
   age = c;
};

void Employee::setHourlyPay(double a){
  hourlyPay = a;
}

const double Employee::getHourlyPay(){
  return hourlyPay;
};

void Employee::setName(string a){
  name = a;
};

const string Employee::getName(){
  return name;
};

void Employee::setAge(int a){
  age = a;
};

const int Employee::getAge(){
  return age;
};

bool Employee::isOlder(Employee a){
  if (getAge() > a.getAge()){
    return true;
  } else {
    return false;
  }
};

double Employee::weeksPay(double a){
  double total = 0.00;
  double overage = 0.00;
  if(a < 40){
    return getHourlyPay() * a;
  } else {
    overage = a - 40;
    total = ((a - overage) * getHourlyPay()) + (overage * (getHourlyPay() * 1.5));
    return total;
  }
};

const void Employee::print(){
  cout << "Employee Name: " << getName() << endl;
  cout << "Employee Hourly Pay: " << getHourlyPay() << endl;
  cout << "Employee Age: " << getAge() << endl;
};
