#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
public:
    int rollNo;
    float marks;
    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayStudentData() {
        displayData(); 
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s1;
    cout << "Enter student details:\n";
    s1.getData();         
    s1.getStudentData(); 
    cout << "\nDisplaying student details:\n";
    s1.displayStudentData();
    return 0;
}
