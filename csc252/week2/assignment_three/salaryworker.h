#ifndef SALARYWORKER_H
#define SALARYWORKER_H
#include "worker.h"
#include <string>

using namespace std;

class SalaryWorker : public Worker {

public:

  SalaryWorker();
  SalaryWorker(string a, double b);
  virtual double computePay(int hours);

private:

};

#endif
