#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int score(const std::vector<int>& dice) {
    unordered_map<int,int> count;
    for(int d : dice){
        count[d]++;
    }
    
    int total = 0;
    for (auto [num, c] : count) {
        if (c >= 3){
            switch (num) {
                case 1: 
                    total+= 1000;
                    c -= 3;
                    break;
                case 2: 
                    total+= 200;
                    c -= 3;
                    break;
                case 3: 
                    total += 300;
                    c -= 3;
                    break;
                case 4: 
                    total += 400;
                    c -= 3;
                    break;
                case 5: 
                    total += 500;
                    c -= 3;
                    break;
                case 6: 
                    total += 600;
                    c -= 3;
                    break;
            }
        }
        if (num == 5) {
            total += c*50;
        }
        if (num == 1) {
            total += c*100;
        }
    }
    return total;
}