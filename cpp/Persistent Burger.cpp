#include <iostream>

using namespace std;

int persistence(long long n) {
    if (n < 10) {
        return n;
    } else {
        int multiNum = 1;
        while(n > 0) {
            multiNum *= n % 10;
            n /= 10;
        }
        return persistence(multiNum);
    }
}

int main() {
  int number;
  int res;
  cin >> number;
  res = persistence(number);
  cout << res;
}