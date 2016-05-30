#include "undergraduate.h"
#include "graduate.h"
#include <string>

using namespace std;

Graduate::Graduate() : Undergraduate(){
  fees = 0.00;
};

Graduate::Graduate(string a, double b, int c, double d) : Undergraduate(a,b,c) {
  fees = d;
};

const double Graduate::totalTuition(){
  return (getTuition() + fees) * getClasses();
};

void Graduate::setFees(double a){
  fees = a;
};

const double Graduate::getFees(){
  return fees;
};
