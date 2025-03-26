#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double getArea() {
        return length * width;
    }
};

int main() {
    double length, width;
    
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    
    Rectangle rect(length, width);
    
    cout << "Area of rectangle: " << rect.getArea() << endl;
    
    return 0;
}