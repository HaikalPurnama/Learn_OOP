#include <iostream>
#include <stdexcept> 
using namespace std;


class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
};

// Implementasi fungsi di luar class
double Calculator::add(double a, double b) { return a + b; }
double Calculator::subtract(double a, double b) { return a - b; }
double Calculator::multiply(double a, double b) { return a * b; }
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Error: Tidak bisa membagi dengan nol!");
    }
    return a / b;
}

int main() {
    Calculator calc;
    double num1, num2;
    int choice;

    cout << "===== Advanced Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    try {
        double result;
        switch (choice) {
            case 1: result = calc.add(num1, num2); break;
            case 2: result = calc.subtract(num1, num2); break;
            case 3: result = calc.multiply(num1, num2); break;
            case 4: result = calc.divide(num1, num2); break;
            default: 
                cout << "Invalid choice!" << endl;
                return 1;
        }
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
