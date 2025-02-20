#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    string course;

public:
    // Constructor
    Student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }

    // Display student details
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    string name;
    int age;
    string course;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // Ignore newline character
    cout << "Enter Course: ";
    getline(cin, course);

    // Creating student object
    Student student(name, age, course);
    
    cout << "\nStudent Details:\n";
    student.displayInfo();
    
    return 0;
}
