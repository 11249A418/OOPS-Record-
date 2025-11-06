#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int intsum = add(5,10);
    float floatsum = add(5.5f,3.2f);
    int triplesum = add(1,2,3);
    cout<<"sum of 5 and 10(int):"<< intsum<<endl;
    cout<<"sum of 5.5 and 3.2(float):"<<floatsum<<endl;
    cout<<"sum of 1,2 and 3 (int):"<<triplesum<<endl;
    return 0;
}