#ifndef UNDERGRADUATE_H
#define UNDERGRADUATE_H
#include <string>

using namespace std;

class Undergraduate {

public:
  Undergraduate();
  Undergraduate(string a, double b, int c);
  const string getName();
  void setName(string a);
  const double getTuition();
  void setTuition(double a);
  const int getClasses();
  void setClass(int a);
  const double totalTuition();

private:
  string name;
  double tuition;
  int numClasses;

};

#endif
