#include "undergraduate.h"
#include <iostream>
#include <string>

using namespace std;

Undergraduate::Undergraduate(){
  name = "";
  tuition = 0.00;
  numClasses = 0;
};

Undergraduate::Undergraduate(string a, double b, int c){
  name = a;
  tuition = b;
  numClasses = c;
};

const string Undergraduate::getName(){
  return name;
};

void Undergraduate::setName(string a){
  name = a;
};

const double Undergraduate::getTuition(){
  return tuition;
};

void Undergraduate::setTuition(double a){
  tuition = a;
};

const int Undergraduate::getClasses(){
  return numClasses;
};

void Undergraduate::setClass(int a){
  numClasses = a;
};

const double Undergraduate::totalTuition(){
  return numClasses * tuition;
}
