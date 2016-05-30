#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "worker.h"
#include <string>

using namespace std;

class HourlyWorker : public Worker {

public:

  HourlyWorker();
  HourlyWorker(string a, double b);
  virtual double computePay(int hours);

private:

};

#endif
