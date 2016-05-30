#include "hourlyworker.h"
#include "worker.h"
#include <string>
#include <iostream>

using namespace std;

HourlyWorker::HourlyWorker() : Worker() {};

HourlyWorker::HourlyWorker(string a, double b) : Worker(a,b){};

double HourlyWorker::computePay(int hours) {
  int time = Worker::computePay(hours);
  if (time > 40){
    int totalTime = time - 40;
    double basePay = getHourlyPay() * 40;
    double overtime = getHourlyPay() * totalTime;
    return basePay + overtime;
  } else {
    return getHourlyPay() * time;
  }
};
