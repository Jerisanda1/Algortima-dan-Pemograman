#include <iostream>

using namespace std;

struct Student {
public:
    int id;
    char name[50];
    int age;
    char department[50];
    float score;
};

void inputdetail(Student &student, int studentNumber) {
    cout << "Enter details for student " << studentNumber << ":\n";
    cout << "ID: ";
    cin >> student.id;
    cin.ignore();
    cout << "Name: ";
    cin.getline(student.name, 50);
    cout << "Age: ";
    cin >> student.age;
    cin.ignore();
    cout << "Department: ";
    cin.getline(student.department, 50);
    cout << "Score: ";
    cin >> student.score;
}

void displayDetail(const Student &student) {
    cout << "ID: " << student.id << ", Name: " << student.name
         << ", Age: " << student.age << ", Department: " << student.department
         << ", Score: " << student.score << endl;
}

int main() {
    int numberOfStudents;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cin.ignore(); // To clear the input buffer after reading numberOfStudents

    // Dynamically allocate an array of Student based on user input
    Student *students = new Student[numberOfStudents];

    for (int i = 0; i < numberOfStudents; ++i) {
        inputdetail(students[i], i + 1);
    }

    cout << "\nDetails of students:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        displayDetail(students[i]);
    }

    // Free the dynamically allocated memory
    delete[] students;

    return 0;
}

