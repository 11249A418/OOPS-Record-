#include <iostream>

void exampleFunction() 
{
    class LocalClass {
    public:
        void display() {
            std::cout << "Hello from the local class!" << std::endl;
        }
    };
    LocalClass obj;
    obj.display();
}
int main() {
    exampleFunction();
    return 0;
}
