//Slip 28 - A) Write a C++ program to read array of ‘n’ integers from user and display it in reverse order. (Use Dynamic memory allocation)
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int* arr = new int[n]; // allocate memory for the array

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array in reverse order is: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    delete[] arr; // deallocate memory

    return 0;
}
