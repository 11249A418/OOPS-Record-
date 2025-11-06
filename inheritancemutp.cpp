#include <iostream>
using namespace std;
class Person {
public:
    void displayPerson() {
        cout << "This is the Person class." << endl;
    }
};
class Employee {
public:
    void displayEmployee() {
        cout << "This is the Employee class." << endl;
    }
};
class Manager : public Person, public Employee {
public:
    void displayManager() {
        cout << "This is the Manager class, derived from both Person and Employee." << endl;
    }
};
int main() {
    Manager m;
    m.displayPerson();   
    m.displayEmployee(); 
    m.displayManager();   
    return 0;
}

    