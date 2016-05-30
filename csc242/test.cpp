#include <iostream>
#include <string>
#include <vector>
using namespace std;



void insert(vector<int> v, int pos, int a)    //pos = 5

  {

    int i = 0;

    int last = v.size() - 1;

    v.push_back(last);  // add one slot and put value of present v[last] in

    for (i = (pos+1); i < last; i=i+1)

       v[i+1] = v[i ];
       cout << v[i] << endl;

    v[pos] = 5; //pos = 5


  };

  int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    insert(v, 3, 4);

    return 0;
  }
