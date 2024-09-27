#include <vector>
#include <algorithm>

using namespace std;

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        vector<int> odds;
        for (int num : array) {
            if (num % 2 != 0) {
                odds.push_back(num);
            }
        }
        
        sort(odds.begin(), odds.end());
        
        int oddIndex = 0;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] % 2 != 0) {
                array[i] = odds[oddIndex++];
            }
        }
        
        return array;
    }
};