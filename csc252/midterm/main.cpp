#include "employee.h"
#include "commissionemployee.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <new>

using namespace std;

Employee makesMore(Employee a, Employee b){
  if (a.getHourlyPay() > b.getHourlyPay()){
    return a;
  } else {
    return b;
  }
};

int main(){

  vector<Employee*> people;

  ifstream input;

  input.open("example.txt");

  if(input.fail()){
    cout << "File failed to open" << endl;
  }

  string index;
  string name;
  double pay;
  int age;
  double rate;
  double sales;

  for (int i = 0; i < 5; i++){

    input >> index >> name >> pay >> age >> rate >> sales;
    
    if ( index == "e"){
      people.push_back(new Employee(name, pay, age));
    } else {
      people.push_back(new CommissionEmployee(name, pay, age, rate, sales));
    }

  }


  for (int n = 0; n < people.size(); n++){
    people[n] -> print();
  }

  input.close();

  return 0;
}
