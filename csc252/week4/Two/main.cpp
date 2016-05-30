#include <iostream>
#include <vector>
#include <string>
#include "employee.h"

using namespace std;

void merge(vector<Employee> &v, int from, int mid, int to){
  int n = to - from + 1;
  vector <Employee> e(n);
  int pt1 = from;
  int pt2 = mid + 1;
  int k = 0;

  while(pt1 <= mid && pt2 <= to){
    if (v[pt1].getSalary() < v[pt2].getSalary()){
      e[k] = v[pt1];
      pt1++;
    } else {
      e[k] = v[pt2];
      pt2++;
    }
    k++;
  }
  while(pt1 <= mid){
    e[k] = v[pt1];
    pt1++;
    k++;
  }
  while(pt2 <= to){
    e[k] = v[pt2];
    pt2++;
    k++;
  }
  for(int i = 0; i < n; i++){
    v[from + i] = e[i];
  }
}

void sort(vector <Employee> &v, int from, int to){
  if (from == to) {
    return;
  }
  int mid = (from + to) / 2;
  sort(v, from, mid);
  sort(v, mid + 1, to);
  merge(v, from, mid, to);
}

int binarySearch(vector <Employee> &v, int from, int to, Employee value){
  if (to < from){
    return -1;
  } else {
    int mid = (from + to) / 2;
    if(v[mid].getSalary() == value.getSalary()){
      return mid;
    } else if(v[mid].getSalary() < value.getSalary()){
      return binarySearch(v, mid + 1, to, value);
    } else {
      return binarySearch(v, mid - 1, to, value);
    }
  }
}

int main(){

  vector <Employee> employees;
  employees.push_back(Employee("chris", 92482));
  employees.push_back(Employee("whitney", 123321));
  employees.push_back(Employee("rob", 41221));
  employees.push_back(Employee("alex", 52300));
  employees.push_back(Employee("steve", 52321));
  employees.push_back(Employee("sam", 92332));

  for(int i = 0; i < employees.size(); i++){
    employees[i].print();
  }
  cout << "=================== Before Sort ===================" << endl;
  sort(employees, 0, 5);
  cout << "=================== After Sort ===================" << endl;

  for(int n = 0; n < employees.size(); n++){
    employees[n].print();
  }

  cout << "=================== Found ===================" << endl;

  int index = binarySearch(employees, 0, 5, Employee("steve", 52321));

  cout << "Index Returned: " <<  index << endl;
  employees[index].print();


  return 0;

};
