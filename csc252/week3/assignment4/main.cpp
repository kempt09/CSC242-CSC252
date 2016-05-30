#include <iostream>
#include <list>

using namespace std;



int main(){
  int posToIn;
  double valueToIn;
  list<double> nums;
  nums.push_back(23.12);
  nums.push_back(43.24);
  nums.push_back(65.23);
  nums.push_back(32.13);

  list<double>::iterator position;

  for (position = nums.begin(); position != nums.end(); position++){
    cout << *position << endl;
  }

  cout << "Enter a position in the list: " << endl;
  cin >> posToIn;
  cout << "Enter a number to insert: " << endl;
  cin >> valueToIn;

  position = nums.begin();

  for(int i = 0; i < posToIn; i++){
    position++;
  }

  nums.insert(position, valueToIn);

  for (position = nums.begin(); position != nums.end(); position++){
    cout << *position << endl;
  }



  return 0;
};
