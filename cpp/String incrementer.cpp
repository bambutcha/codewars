#include <iostream>
#include <string>

using namespace std;

string incrementString(const string& str) {
    int lastDigitPos = str.length() - 1;
    while (lastDigitPos >= 0 && isdigit(str[lastDigitPos])) {
        --lastDigitPos;
    }
  
    if (lastDigitPos == static_cast<int>(str.length()) - 1) {
        return str + "1";
    }

    string numericPart = str.substr(lastDigitPos + 1);
    int num = stoi(numericPart);
    string newNumericPart = to_string(num + 1);

    int numDigits = static_cast<int>(newNumericPart.length());
    int numLeadingZeros = numericPart.length() - numDigits;
    if (numLeadingZeros > 0) {
        newNumericPart = string(numLeadingZeros, '0') + newNumericPart;
    }

    return str.substr(0, lastDigitPos + 1) + newNumericPart;
}