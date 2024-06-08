/*Write a C++ Program to illustrates the use of Constructors in multilevel inheritance*/
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseVar;

    // Default constructor
    Base() {
        cout << "Base class constructor called" << endl;
        baseVar = 0;
    }

    // Parameterized constructor
    Base(int b) {
        cout << "Base class parameterized constructor called" << endl;
        baseVar = b;
    }
};

// Intermediate derived class
class Derived1 : public Base {
public:
    int derived1Var;

    // Default constructor
    Derived1() {
        cout << "Derived1 class constructor called" << endl;
        derived1Var = 0;
    }

    // Parameterized constructor
    Derived1(int d1, int b) : Base(b) {
        cout << "Derived1 class parameterized constructor called" << endl;
        derived1Var = d1;
    }
};

// Derived class
class Derived2 : public Derived1 {
public:
    int derived2Var;

    // Default constructor
    Derived2() {
        cout << "Derived2 class constructor called" << endl;
        derived2Var = 0;
    }

    // Parameterized constructor
    Derived2(int d2, int d1, int b) : Derived1(d1, b) {
        cout << "Derived2 class parameterized constructor called" << endl;
        derived2Var = d2;
    }
};

int main() {
    // Creating object of derived class with parameterized constructor
    Derived2 obj(10, 20, 30);

    // Displaying values
    cout << "Base variable: " << obj.baseVar << endl;
    cout << "Derived1 variable: " << obj.derived1Var << endl;
    cout << "Derived2 variable: " << obj.derived2Var << endl;

    return 0;
}