#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

float getLargest(const vector<float>  &v){
  float largest = v[0];
  for (int i = 0; i < v.size(); i++){
    if (largest < v[i]){
      largest = v[i];
    }
  }
  return largest;
};

float getSmallest(const vector<float>  &v){
  float smallest = v[0];
  for (int i = 0; i < v.size(); i++){
    if (smallest > v[i]){
      smallest = v[i];
    }
  }
  return smallest;
};

int main(){
  vector <float> nums;
  float a;
  float largest;
  float smallest;

  string fileName;
  ifstream inputFile;
  ofstream outputFile;
  cout << "Enter File Name" << endl;
  cin >> fileName;

  inputFile.open(fileName.c_str());

  if(inputFile.fail()){
    cout << "File failed to open" << endl;
  }

  outputFile.open("output.txt");
  for (int i = 0; i < 10; i++){
    inputFile >> a;
    nums.push_back(a);
    outputFile << nums[i] << endl;
    cout << nums[i] << endl;
  }

  inputFile.close();
  outputFile.close();

  cout << "Largest Number: " << getLargest(nums) << endl;
  cout << "Smallest Number: " << getSmallest(nums) << endl;

  return 0;
};
