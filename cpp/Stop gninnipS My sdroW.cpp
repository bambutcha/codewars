#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string spinWords(const string &str)
{
    vector<string> stringWord;
    string word, massage;
    
    stringstream ss(str);
    
    while (getline(ss, word, ' ')) {
        stringWord.push_back(word);
    }
    
    for (const string& i : stringWord) {
        if (i.length() < 5) {
            massage += i + " ";
        } else {
            string reversed = i;
            reverse(reversed.begin(), reversed.end());
            massage += reversed + " ";
        }
    }
    
    // Удаление последнего пробела
    if (!massage.empty() && massage.back() == ' ') {
        massage.pop_back();
    }
    
    return massage;
}