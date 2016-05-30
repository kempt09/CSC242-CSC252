#include "employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee(){
  status = "";
  name = "";
  dependents = 0;
  hoursWorked = 0;
  hourlyPay = 0.00;
  taxRate = 0.00;
};

Employee::Employee(string a, string c, int d){
  name = a;
  status = c;
  dependents = d;
};

const string Employee::getName(){
  return name;
};

void Employee::setName(string a){
  name = a;
};

const string Employee::getStatus(){
  return status;
};

void Employee::setStatus(string a){
  status = a;
};

const int Employee::getDependents(){
  return dependents;
};

void Employee::setDependents(int a){
  dependents = a;
};

const double Employee::getTaxRate(){
  return taxRate;
};

void Employee::setTaxRate(double a){
  taxRate = a;
};

const double Employee::getHourlyPay(){
  return hourlyPay;
};

void Employee::setHourlyPay(double a){
  hourlyPay = a;
};

const int Employee::getHoursWorked(){
  return hoursWorked;
};

void Employee::setHoursWorked(int a){
  hoursWorked = a;
};

const string Employee::getEmployeeInfo(){
  cout << "Employee: " << name << endl;
  cout << "Number of Dependents: " << dependents << endl;
  cout << "Maritial Status: " << status << endl;
  cout << "Hourly Pay: " << hourlyPay << endl;
  cout << "Hours Worked: " << hoursWorked << endl;
  cout << "Tax Rate: " << taxRate << endl;
  cout << "Pay Before Taxes: " << getWeeklyPay() << endl;
  cout << "Pay After Taxes: " << getTaxDeductionAmount() << endl;
  cout << "Difference: " << (getWeeklyPay() - getTaxDeductionAmount()) << endl;
  return "";
};

const double Employee::getTaxDeductionAmount(){
  double amount = 0.00;
  double taxedAmount = 0.00;
  amount = hoursWorked * hourlyPay;
  taxedAmount = amount * taxRate;
  amount = amount - taxedAmount;
  return amount;
};

const double Employee::getWeeklyPay(){
  return hourlyPay * hoursWorked;
};
