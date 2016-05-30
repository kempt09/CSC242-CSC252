#include "salaryworker.h"
#include "worker.h"
#include <string>
#include <iostream>

using namespace std;

SalaryWorker::SalaryWorker() : Worker() {};

SalaryWorker::SalaryWorker(string a, double b) : Worker(a,b){};

double SalaryWorker::computePay(int hours) {
  int time = Worker::computePay(hours);
  if (time > 40){
    return getHourlyPay() * 40;
  } else {
    return getHourlyPay() * time;
  }
};
