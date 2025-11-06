#include <iostream>
using namespace std;

// Define the Student class
class Student 
{
    private:
        string name;
        int rollno;
        float marks;

    public:
        // Constructor to initialize the student object
        Student(string n, int r, float m)
         {
            name = n;
            rollno = r;
            marks = m;
        }

        // Member function to display student information
        void displayInfo()
        {
            cout << "Student Name: " << name << endl;
            cout << "roll no: " << rollno << endl;
            cout << "marks: " <<marks << endl;
        }
};

int main()
 {
    // Create a Student object
    Student student1("joy boy", 25, 90);

    // Display student information
    student1.displayInfo();

    return 0;
}

