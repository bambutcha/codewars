#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

string highAndLow(string numbers){
  vector<int> nums;
  string number;
  stringstream ss(numbers);
  
  while (getline(ss, number, ' ')){
    nums.push_back(stoi(number));
  }
  
  sort(nums.begin(), nums.end());
  
  return to_string(nums.back()) + " " + to_string(nums.front());
}