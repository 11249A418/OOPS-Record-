#include<iostream>
using namespace std;
class book 
{
    private:
    string title;
    string authorname;
    int pages;
    float price;
    public:
    void setdetails(string t, string a, int pa, float p);
    void printdetails();
};
 void book::setdetails(string t, string a, int pa, float p)
 {
    title = t;
    authorname = a;
    pages = pa;
    price = p;

} 
void book::printdetails()
{
    cout<<"book title:"<<title<<endl;
    cout<<"author name:"<<authorname<<endl;
    cout<<"pages:"<<pages<<endl;
    cout<<"price:"<<price<<endl;

}
int main()
{
    book mybook;
    mybook.setdetails("noland the liar", "ussop", 400, 599);
    mybook.printdetails();
    return 0;
}   
    



    
