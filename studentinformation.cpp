#include <iostream>
using namespace std;
class Student {
    int id;
    char name[50];
    int age;
    float marks;
public:
    void input() {
        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore();  

        cout << "Enter student name: ";
        cin.getline(name, 50);

        cout << "Enter student age: ";
        cin >> age;

        cout << "Enter student marks: ";
        cin >> marks;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name 
             << ", Age: " << age << ", Marks: " << marks << endl;
    }
};
int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;
    Student students[N];  
    for (int i = 0; i < N; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].input();
    }
    cout << "\nStudent Information:\n";
    for (int i = 0; i < N; i++) {
        students[i].display();
    }
    return 0;
}

