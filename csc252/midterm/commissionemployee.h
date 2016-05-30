#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "employee.h"
#include <string>

using namespace std;

class CommissionEmployee : public Employee {

public:
  CommissionEmployee();
  CommissionEmployee(string a, double b, int c, double d, double e);
  const double getRate();
  void setRate(double a);
  const double getSales();
  void setSales(double a);
  virtual double weeksPay(double a);
  virtual const void print();

private:
  double rate;
  double sales;

};

#endif
