#include <sstream>
#include <vector>
#include <string>
#include <cctype>

std::string pig_it(std::string str)
{
    std::vector<std::string> stringWord;
    std::string massage, wordElement;

    std::stringstream ss(str);

    while (getline(ss, wordElement, ' ')) {
        stringWord.push_back(wordElement);
    }

    for (std::string& i : stringWord) {
        if (isalpha(i[0])) {
            std::string word = i.substr(1) + i[0] + "ay";
            massage += word + " ";
        } else {
            massage += i + " "; 
        }
    }

    // удаляем лишний пробел в конце
    if (!massage.empty()) {
        massage.pop_back();
    }

    return massage;
}