#include "worker.h"
#include <string>
#include <iostream>

using namespace std;

Worker::Worker(){
  name = "";
  hourlyPay = 0.00;
};
Worker::Worker(string a, double b){
  name = a;
  hourlyPay = b;
};
const string Worker::getName(){
  return name;
};
void Worker::setName(string a){
  name = a;
};
const double Worker::getHourlyPay(){
  return hourlyPay;
};
void Worker::setHourlyPay(double a){
  hourlyPay = a;
};
double Worker::computePay(int hours){
  return hours;
};
const void Worker::print(){
  cout << "Worker Name: " << getName() << endl;
  cout << "Hourly Pay: " << getHourlyPay() << endl;
};
