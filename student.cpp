#include <iostream>
using namespace std;
class Student 
{
    private:
        string name;
        int rollno;
        float marks;
    public:
       Student(string n, int r, float m)
         {
            name = n;
            rollno = r;
            marks = m;
        }
void displayInfo()
        {
            cout << "Student Name: " << name << endl;
            cout << "roll no: " << rollno << endl;
            cout << "marks: " <<marks << endl;
        }
};

int main()
 {
    Student student1("joy boy", 25, 90);
    student1.displayInfo();
    return 0;
}


