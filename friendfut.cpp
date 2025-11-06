#include <iostream>
using namespace std;
class Box 
{
private:
    int length;
public:
    Box() : length(5.5) {}
    friend void printLength(Box box);
};
void printLength(Box box) 
{
   cout << "Length of box: " << box.length << endl;
}
int main() {
    Box b;
    printLength(b);  
    return 0;
}
