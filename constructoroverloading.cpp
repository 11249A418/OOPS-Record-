#include <iostream>
using namespace std;
class Box {
private:
    double length, breadth, height;
public:
    Box() {
        length = 0;
        breadth = 0;
        height = 0;
        cout << "Default constructor called" << endl;
    }
    Box(double l) {
        length = l;
        breadth = l;
        height = l;
        cout << "Parameterized constructor with 1 argument called" << endl;
    }
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized constructor with 3 arguments called" << endl;
    }
    double volume() {
        return length * breadth * height;
    }
};
int main() {
    Box box1; 
    Box box2(5); 
    Box box3(5, 3, 2); 
    cout << "Volume of box1: " << box1.volume() << endl;
    cout << "Volume of box2: " << box2.volume() << endl;
    cout << "Volume of box3: " << box3.volume() << endl;
    return 0;
}
