#include <iostream>
using namespace std;
class ElectricityBill 
{
    int consumerNo, prevReading, currReading, units;
    double bill;
    string name, type;
      double calcBill()
       {
        double amount = 0;
        if (type == "domestic")
         {
            if (units <= 100) amount = units * 1;
            else if (units <= 200) amount = 100 * 1 + (units - 100) * 2.5;
            else if (units <= 500) amount = 100 * 1 + 100 * 2.5 + (units - 200) * 4;
            else amount = 100 * 1 + 100 * 2.5 + 300 * 4 + (units - 500) * 6;
        } else {
            if (units <= 100) amount = units * 2;
            else if (units <= 200) amount = 100 * 2 + (units - 100) * 4.5;
            else if (units <= 500) amount = 100 * 2 + 100 * 4.5 + (units - 200) * 6;
            else amount = 100 * 2 + 100 * 4.5 + 300 * 6 + (units - 500) * 7;
        }
        return amount;
    }

public:
    void input() {
        cout << "Consumer No: "; cin >> consumerNo;
        cout << "Name: "; cin.ignore(); getline(cin, name);
        cout << "Prev Reading: "; cin >> prevReading;
        cout << "Curr Reading: "; cin >> currReading;
        cout << "Type (domestic/commercial): "; cin >> type;
        units = currReading - prevReading;
    }

    void display() {
        bill = calcBill();
        cout << "\nConsumer No: " << consumerNo << "\nName: " << name
             << "\nUnits Consumed: " << units << "\nBill Amount: Rs. " << bill << "\n";
    }
};

int main() {
    ElectricityBill e;
    e.input();
    e.display();
    return 0;
}
