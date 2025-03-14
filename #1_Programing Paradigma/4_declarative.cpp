#include <iostream>
#include <numeric>
#include <array>
using namespace std;

int main () {
    int x = 300;
    int y = 200;
    std::array<int, 2> numbers = {x, y};
    cout << accumulate(numbers.begin(), numbers.end(), 0);
    return 0;
}