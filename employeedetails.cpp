#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int empID;
        float basicPay;
        float DA, HRA, grossPay;

    public:
        void input() {
            cout << "Enter Employee Name: ";
            getline(cin, name);
            cout << "Enter Employee ID: ";
            cin >> empID;
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
        }

        void calculate() {
            // Example calculations (can vary depending on company rules)
            DA = 0.1 * basicPay;   // 10% of basic pay
            HRA = 0.15 * basicPay; // 15% of basic pay
            grossPay = basicPay + DA + HRA;
        }

        void display() {
            cout << "\n----- Employee Payslip -----\n";
            cout << "Employee Name: " << name << endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Basic Pay: " << basicPay << endl;
            cout << "DA (10%): " << DA << endl;
            cout << "HRA (15%): " << HRA << endl;
            cout << "Gross Pay: " << grossPay << endl;
            cout << "----------------------------\n";
        }
};

int main() {
    Employee emp;
    emp.input();
    emp.calculate();
    emp.display();

    return 0;
}
