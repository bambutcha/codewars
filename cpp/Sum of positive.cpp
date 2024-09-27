#include <vector>
using namespace std;

int positive_sum (vector<int> arr){
  int sumNumbers = 0;
  int countNegative = 0;
  int count = 0;
  for(int digit : arr){
    count ++;
    if (digit > 0){
      sumNumbers += digit;
    }

    if (digit < 0){
      countNegative++;
    }
  }
  if (countNegative == count){
    return 0;
  } else return sumNumbers;
  
}