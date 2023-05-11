//Slip 1 - A) Write a C++ program to check maximum and minimum of two integer numbers. (Use Inline function and Conditional operator)
 //Solution:
#include<iostream>
using namespace std;


inline int max(int a, int b) {
   return ((a > b) ? a : b);
}

inline int min(int a, int b) {
    return ((a < b) ? a : b);
}

int main() {
    int a, b;

    cout << "Enter 2 numbers" << endl;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    cout << "The maximum number is: " << max(a, b) << endl;
    cout << "The minimum number is: " << min(a, b) << endl;

    return 0;
}
