#include <iostream>

using namespace std;

int returnValue(int numbers[], int size){
  if (size == 0){
    return numbers[0];
  }
  return numbers[0] + returnValue(numbers, size - 1);

};

int main(){

  int arrOfNums[] = {1,2,3,4,5};
  cout << "The sum of the Array is: " << returnValue(arrOfNums, 5) << endl;
  return 0;
};
