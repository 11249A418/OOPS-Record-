#include <iostream>
using namespace std;

int main() {
    // Dynamic allocation of a single integer
    int *ptr = new int; 
    *ptr = 25;
    cout << "Value of dynamically allocated integer: " << *ptr << endl;

    // Freeing memory for single integer
    delete ptr;

    // Dynamic allocation of an array
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;

    int *arr = new int[n]; // allocating memory for array

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Deallocating array memory
    delete[] arr;

    cout << "\nMemory has been released successfully." << endl;

    return 0;
}
