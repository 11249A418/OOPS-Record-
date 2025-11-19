#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    cout << "Add 2 integers: " << calc.add(5, 10) << endl;
    cout << "Add 3 integers: " << calc.add(1, 2, 3) << endl;
    cout << "Add 2 doubles: " << calc.add(2.5, 3.7) << endl;
    return 0;
}

