#include <vector>
#include <string>

std::string odd_or_even(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    if (sum % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}