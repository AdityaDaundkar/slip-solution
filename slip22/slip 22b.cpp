//Slip 22 - B) Write a C++ program to overload ‘display_str’ function as follows: i. void display_str(char *) - Display a string in double quotes. ii. void display_str (int n, char *)- Display first n characters from a given string. iii, void display_str (int m, int n,char *)- Display substring of a given string from position m to n.
#include <iostream>
#include <string>
using namespace std;

void display_str(char *str) {
    cout << "\"" << str << "\"" << endl;
}

void display_str(int n, char *str) {
    string s(str);
    cout << "\"" << s.substr(0, n) << "\"" << endl;
}

void display_str(int m, int n, char *str) {
    string s(str);
    cout << "\"" << s.substr(m, n-m+1) << "\"" << endl;
}

int main() {
    char str[] = "Hello, World!";

    display_str(str);
    display_str(5, str);
    display_str(2, 7, str);

    return 0;
}
