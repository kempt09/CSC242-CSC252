#include <string>
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;


class Car {

public:
  Car();
  Car(string a, int b);
  const string getMake();
  void setMake(string a);
  const int getYear();
  void setYear(int a);
  const void print();
  Car& operator++();

private:
  string make;
  int year;
};

Car::Car(){
  make = "";
  year = 0;
};

Car::Car(string a, int b){
  make = a;
  year = b;
};

const string Car::getMake(){
  return make;
};

void Car::setMake(string a){
  make = a;
};

const int Car::getYear(){
  return year;
};

void Car::setYear(int a){
  year = a;
};

const void Car::print(){
  cout << "Make: " << getMake() << endl;
  cout << "Year: " << getYear() << endl;
};

Car& Car::operator++(){
  year = year + 1;
  return *this;
};

Car operator>>(istream& in, Car& car){
  string a;
  int b;
  in >> a >> b;
  car = Car(a, b);
};

Car operator<<(ostream& out, Car& car){
  out << "Make(Overloaded): " << car.getMake() << endl;
  out << "Year(Overloaded): " << car.getYear() << endl;
};

bool operator> (Car& left, Car& right){
  if (left.getYear() < right.getYear()){
    return true;
  } else {
    return false;
  }
};

void merge(vector<Car> &v, int from, int mid, int to){
  int n = to - from + 1;
  vector <Car> e(n);
  int pt1 = from;
  int pt2 = mid + 1;
  int k = 0;

  while(pt1 <= mid && pt2 <= to){
    if (v[pt1].getYear() < v[pt2].getYear()){
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

void sort(vector <Car> &v, int from, int to){
  if (from == to) {
    return;
  }
  int mid = (from + to) / 2;
  sort(v, from, mid);
  sort(v, mid + 1, to);
  merge(v, from, mid, to);
}

int linearSearch(vector <Car>& v, Car& e){
  for (int i = 0; i < v.size(); i++){
    if(v[i].getYear() == e.getYear()){
      return i;
    }
  }
  return -1;
};

int binarySearch(vector <Car> &v, int from, int to, Car& value){
  if (to < from){
    return -1;
  } else {
    int mid = (from + to) / 2;
    if(v[mid].getYear() == value.getYear()){
      return mid;
    } else if(v[mid].getYear() < value.getYear()){
      return binarySearch(v, mid + 1, to, value);
    } else {
      return binarySearch(v, mid - 1, to, value);
    }
  }
}

int main(){

  // Car myCar("Ford", 2010);
  // Car *ptr = NULL;
  // ptr = new Car("Honda", 2012);
  // Car someCar;

  // myCar.print();
  // ptr -> print();
  //
  // ptr = NULL;
  // ptr = &myCar;
  //
  // ptr -> print();

  // cout << "Enter Car Model and Year" << endl;
  // cin >> someCar;
  // someCar.print();
  // cout << someCar;

  // bool valueTrue = someCar > myCar;
  //
  // cout << valueTrue << endl;
  //
  // bool valueFalse = myCar > someCar;
  //
  // cout << valueFalse << endl;

  vector<Car> cars;
  Car mini("Mini Cooper", 2012);
  cars.push_back(Car("Ford", 2016));
  cars.push_back(Car("Chevy", 2005));
  cars.push_back(Car("VW", 1980));
  cars.push_back(mini);
  cars.push_back(Car("Dodge", 2009));

  // for(int n = 0; n < cars.size(); n++){
  //   cout << cars[n].getYear() << endl;
  // }

  sort(cars, 0, 4);

  // cout << "===== After Sort =====" << endl;
  //
  // for(int i = 0; i < cars.size(); i++){
  //   cout << cars[i].getYear() << endl;
  // }

  // int indexLinear = linearSearch(cars, mini);
  // cars[indexLinear].print();

  // int indexBinary = binarySearch(cars, 0, 4, mini);
  // cars[indexBinary].print();

cout << mini.getYear() << endl;
mini.operator++();
cout << mini.getYear() << endl;


  return 0;
};
