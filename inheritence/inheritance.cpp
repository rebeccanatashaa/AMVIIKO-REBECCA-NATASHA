#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
protected:
    string registrationNumber;

public:
    Student(string n, int a, string reg)
        : Person(n, a) {
        registrationNumber = reg;
    }

    void displayStudent() {
        cout << "Registration Number: "
             << registrationNumber << endl;
    }
};

// Further derived class
class EngineeringStudent : public Student {
private:
    string course;

public:
    EngineeringStudent(string n, int a,
                       string reg, string c)
        : Student(n, a, reg) {
        course = c;
    }

    void displayEngineering() {
        displayPerson();
        displayStudent();
        cout << "Course: " << course << endl;
    }
};

int main() {
    EngineeringStudent s1(
        "Natasha", 21, "24/U/12345",
        "Computer and Communications Engineering"
    );

    s1.displayEngineering();

    return 0;
}