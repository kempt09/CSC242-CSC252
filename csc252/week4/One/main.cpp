#include <iostream>
#include <vector>
#include <string>
#include "employee.h"

using namespace std;

int linearSearch(vector <Employee> v, Employee e){
  for(int i = 0; i < v.size(); i++){
    if(v[i].getName() == e.getName()){
      return i;
    }
  }
  return -1;
}

int main(){

  vector <Employee> employees;
  employees.push_back(Employee("chris", 123321));
  employees.push_back(Employee("whitney", 123321));
  employees.push_back(Employee("rob", 123321));
  employees.push_back(Employee("alex", 123321));
  employees.push_back(Employee("steve", 123321));
  employees.push_back(Employee("sam", 123321));


  // Result when an object is found

  int index = linearSearch(employees, Employee("alex", 123321));

  cout << "Index Returned: " <<  index << endl;
  employees[index].print();

  // Result when object is not found

  int notFound = linearSearch(employees, Employee("jessica", 123321));

  cout << "Index Returned: " << notFound << endl;
  employees[notFound].print();



  return 0;

};
