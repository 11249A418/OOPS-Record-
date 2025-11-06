#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main()
{
 int num;
  std::cout<<"enter a number:";
  std::cin>>num;
  std::cout<<"square of"<<num<<"is"<<square(num)<<std::endl;
  return 0;
} 