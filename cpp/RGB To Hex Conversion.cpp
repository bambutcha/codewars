#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

std::string decimalToHexadecimal(int decimal) {
    string hexadecimal;
    const char hexDigits[] = "0123456789ABCDEF";
    
    if (decimal < 0) {
        decimal = 0;
    } else if(decimal > 255) {
        decimal = 255;
    }
    
    do {
        hexadecimal = hexDigits[decimal % 16] + hexadecimal;
        decimal /= 16;
    } while (decimal > 0);
    
    if(hexadecimal.length() < 2) {
        hexadecimal = "0" + hexadecimal;
    }
    
    return hexadecimal;
}

std::string rgb_to_hex(int r, int g, int b)
{
    string massage;
  
    massage = decimalToHexadecimal(r) + decimalToHexadecimal(g) + decimalToHexadecimal(b);
    
    return massage;
}