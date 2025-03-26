#include <iostream>
using namespace std;


class Student {
public:
    string name;
    int ID;
    double grade;


    Student(string n, int id, double g) {
        name = n;
        ID = id;
        grade = g;
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << ID << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student1("Haikal Purnama Saputra", 10013, 85.5);
    cout << "\n===== Student Information =====" << endl;
    student1.displayInfo();
    
    return 0;
}
