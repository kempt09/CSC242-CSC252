#ifndef WORKER_H
#define WORKER_H
#include <string>

using namespace std;

class Worker {

public:

  Worker();
  Worker(string a, double b);
  const string getName();
  void setName(string a);
  const double getHourlyPay();
  void setHourlyPay(double a);
  virtual double computePay(int hours);
  const void print();

private:
  string name;
  double hourlyPay;

};

#endif
