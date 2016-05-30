#include "employee.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void swap(Employee &a, Employee &b){
  Employee tmp;
  tmp = a;
  a = b;
  b = tmp;
};

int minPos(vector<Employee> &v, int from, int to) {
  int minimum = from;
  for (int i = from + 1; i <= to; i++){
    if (v[i].getSalary() < v[minimum].getSalary()){
      minimum = i;
    }
  }
  return minimum;
}

void sortSalary(vector<Employee> &v){
  for(int i = 0; i < v.size() - 1; i++){
    int min = minPos(v, i, v.size() - 1);
    if(v[min].getSalary() != v[i].getSalary()){
      swap(v[min], v[i]);
    }
  }
}

int main(){

  vector <Employee> employees;
  Employee chris("chris", 123332);
  Employee whitney("whitney", 132112);
  Employee steve("steve", 54233);
  Employee sam("sam", 84232);
  employees.push_back(chris);
  employees.push_back(whitney);
  employees.push_back(steve);
  employees.push_back(sam);

  sortSalary(employees);

  for (int i = 0; i < employees.size(); i++){
    employees[i].print();
  }

  return 0;

};
