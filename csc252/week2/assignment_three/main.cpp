#include "hourlyworker.h"
#include "salaryworker.h"
#include "worker.h"
#include <iostream>
#include <vector>


using namespace std;

int main(){

  vector<Worker*> workers(2);


  SalaryWorker whitney("whitney", 40.25);
  HourlyWorker chris("chris", 40.75);

  workers[0] = &chris;
  workers[1] = &whitney;

  for(int i = 0; i < workers.size(); i++){
    workers[i] -> print();
  }

  for(int n = 0; n < workers.size(); n++){
    cout << workers[n] -> computePay(43) << endl;
  }



  return 0;
};
