#include <iostream>
using namespace std;
class person 
{
private:
    string name;
    int age;
public:
    person()
{
    name ="unknown";
    age =5;
    cout<<"default constructor called!"<<endl;
}
 person(string n, int a)
{
    name =n ;
    age =a;
    cout<<"parameterized constructor called for"<<name<<"!"<<endl;
}
 ~person()
{
     cout<<"destructor called for"<<name<<"!"<<endl;
}
void display() 
{
    cout<<"name:"<<name<<"age:"<<age<<endl;
}
};
int main()
{
    cout<<"---creating p1 using default constructor---"<<endl;
    person p1;
    p1.display();
    cout<<"---creating p2 using parameterized constructor---"<<endl;
    person p2("alice",30);
    p2.display();
    cout<<"---exiting program---"<<endl;
    return 0;
}         
       
        