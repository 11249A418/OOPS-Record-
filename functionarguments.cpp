#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    int area() {
        return length * width;
    }
};
void printArea(Rectangle rect) {
    cout << "Area of Rectangle: " << rect.area() << endl;
}
int main() {
    Rectangle r1(10, 5);
    printArea(r1);  
    return 0;
}
