#ifndef GRADUATE_H
#define GRADUATE_H
#include "undergraduate.h"
#include <string>

using namespace std;

class Graduate : public Undergraduate {

public:

  Graduate();
  Graduate(string a, double b, int c, double d);
  const double totalTuition();
  void setFees(double a);
  const double getFees();

private:
  double fees;

};

#endif
