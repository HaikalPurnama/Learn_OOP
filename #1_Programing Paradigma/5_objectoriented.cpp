#include <iostream>
using namespace std;

class Number  {
    private :
        int x;
        int y;
    public :
        Number(int xVal, int yVal) : x(xVal), y(yVal) {}
        int sum() const {
            return x + y;
        }

};

int main () {
    Number test(250, 600);
    cout << test.sum();
    return 0;
}