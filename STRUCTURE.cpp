#include <iostream>  // To use cout
#include <string>    // To use string

using namespace std;

struct Person {
    string name;
    int age;
    double height;

    // Constructor
    Person(string n, int a, double h) {
        name = n;
        age = a;
        height = h;
    }
};

int main() {
    // Initialize using the constructor
    Person person1("John", 30, 5.9);

    // Access members
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    return 0;
}

