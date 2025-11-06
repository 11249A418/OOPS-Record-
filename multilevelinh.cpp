#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};
class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};
int main() {
    Dog dog1;
    dog1.eat();      
    dog1.breathe();  
    dog1.bark();     
    return 0;
}
