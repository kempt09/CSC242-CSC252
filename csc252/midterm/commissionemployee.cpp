#include "commissionemployee.h"
#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

CommissionEmployee::CommissionEmployee() : Employee() {
  rate = 0.00;
  sales = 0.00;
};

CommissionEmployee::CommissionEmployee(string a, double b, int c, double d, double e) : Employee(a,b,c) {
  rate = d;
  sales = e;
};
const double CommissionEmployee::getRate(){
  return rate;
};
void CommissionEmployee::setRate(double a){
  rate = a;
};
const double CommissionEmployee::getSales(){
  return sales;
};
void CommissionEmployee::setSales(double a){
  sales = a;
};
double CommissionEmployee::weeksPay(double a){
  double total = Employee::weeksPay(a);
  return total + (rate * sales);
};
const void CommissionEmployee::print(){
  Employee::print();
  cout << "Commissioned Rate: " << getRate() << endl;
  cout << "Commissioned Sales: " << getSales() << endl;
};
