#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class (inherits from Animal)
class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

// Further derived class (inherits from Mammal)
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Main function
int main() {
    Dog dog1;

    // Access functions from all levels of inheritance
    dog1.eat();      // from Animal
    dog1.breathe();  // from Mammal
    dog1.bark();     // from Dog

    return 0;
}
