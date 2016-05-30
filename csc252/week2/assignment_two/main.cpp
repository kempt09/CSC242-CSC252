#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector <char> duplicates(vector <char> c){
  vector <char> final;
  final.push_back(c[0]);
  for (int i = 0; i < c.size(); i++){
    bool addChar = true;
    for (int n = 0; n < final.size(); n++){
      if (final[n] == c[i]){
        addChar = false;
      }
    }
    if (addChar){
      final.push_back(c[i]);
    }
  }
  return final;
};

vector<char> encrypt(vector<char> &v){
  vector<char> result;
  string letters = "zyxwvutsrqponmlkjihgfedcba";
  for (int n = 0; n < v.size(); n++){
    result.push_back(v[n]);
  }
  for (int i = 0; i < letters.size(); i++){
    result.push_back(letters[i]);
  }

  return result;
};

int main(){

  vector<char> input;
  string word;
  cout << "Enter a single word" << endl;
  cin >> word;

  for (int i = 0; i < word.size(); i++){
    input.push_back(word[i]);
  }

  vector<char> newList = encrypt(input);
  vector <char> final = duplicates(newList);

  for (int n = 0; n < final.size(); n++){
    cout << final[n];
  }

  cout << "" << endl;

  return 0;
};
