#include <iostream>
using namespace std;
class MyClass {
private:
    static int count;  
public:
    MyClass() {
        count++;
    }
    static int getCount() {
        return count;
    }
};
int MyClass::count = 0;
int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    cout << "Number of objects created: " << MyClass::getCount() << endl;
    return 0;
}
