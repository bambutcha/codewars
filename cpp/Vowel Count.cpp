/*
#include <string>

using namespace std;

int getCount(string inputStr){
  int num_vowels = 0;
  string vowels = "aeiou";
  for (char inputChars : inputStr) {
    for (char vowelsChars : vowels) {
      if (inputChars == vowelsChars) num_vowels++;
    }
  }
  return num_vowels;
} */


#include <string>

using namespace std;

int getCount(string inputStr){
  int num_vowels = 0;
  string vowels = "aeiou";
  for (char inputChars : inputStr) {
    if (vowels.find(inputChars) != string::npos){
        num_vowels ++;
    }
  }
  
  return num_vowels;
}
