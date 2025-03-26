#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    double x, y;

    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    
    Point point(x, y);
    
    cout << "Distance from origin: " << point.distanceFromOrigin() << endl;
    
    return 0;
}