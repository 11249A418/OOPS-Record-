#include <iostream>
using namespace std;
class Number {
    int value;
public:
    Number(int v = 0) { value = v; }
    Number operator-() {
        return Number(-value);
    }
    Number operator++() {
        ++value;
        return *this;
    }
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number n1(5);
    cout << "Original: ";
    n1.display();
    Number n2 = -n1;     
    cout << "After unary minus: ";
    n2.display();
    ++n1;               
    cout << "After prefix ++: ";
    n1.display();
    n1++;               
    cout << "After postfix ++: ";
    n1.display();
    return 0;
}
    






