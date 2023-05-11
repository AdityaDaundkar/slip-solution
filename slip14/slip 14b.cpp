//Slip 14 - B) Create a C++ class MyString with data members a character pointer and str_length. (Use new and delete operator). Write a C++ program using operator overloading to perform following operation: i. ! To reverse the case of each alphabet from a given string. ii. < To compare length of two strings. iii. + To add constant ‘n’ to each alphabet of string.
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;
    int str_length;
public:
    MyString() : str(nullptr), str_length(0) {} // default constructor
    MyString(const char* s) : str(nullptr), str_length(0) { // constructor with char*
        if (s != nullptr) {
            str_length = strlen(s);
            str = new char[str_length+1];
            strcpy(str, s);
        }
    }
    MyString(const MyString& rhs) : str(nullptr), str_length(0) { // copy constructor
        if (rhs.str != nullptr) {
            str_length = rhs.str_length;
            str = new char[str_length+1];
            strcpy(str, rhs.str);
        }
    }
    ~MyString() { // destructor
        if (str != nullptr) {
            delete[] str;
            str = nullptr;
        }
    }
    MyString& operator=(const MyString& rhs) { // assignment operator
        if (this != &rhs) {
            if (str != nullptr) {
                delete[] str;
                str = nullptr;
            }
            if (rhs.str != nullptr) {
                str_length = rhs.str_length;
                str = new char[str_length+1];
                strcpy(str, rhs.str);
            }
        }
        return *this;
    }
    MyString operator!() const { // ! operator to reverse case of each alphabet
        MyString temp(*this);
        for (int i = 0; i < str_length; i++) {
            if (isupper(temp.str[i])) {
                temp.str[i] = tolower(temp.str[i]);
            } else if (islower(temp.str[i])) {
                temp.str[i] = toupper(temp.str[i]);
            }
        }
        return temp;
    }
    bool operator<(const MyString& rhs) const { // < operator to compare string lengths
        return str_length < rhs.str_length;
    }
    MyString operator+(int n) const { // + operator to add constant 'n' to each alphabet
        MyString temp(*this);
        for (int i = 0; i < str_length; i++) {
            if (isalpha(temp.str[i])) {
                temp.str[i] += n;
            }
        }
        return temp;
    }
    friend ostream& operator<<(ostream& os, const MyString& s) { // output operator
        os << s.str;
        return os;
    }
};

int main() {
    MyString s1("Hello World!");
    MyString s2("abcdef");
    cout << !s1 << endl; // should output "hELLO wORLD!"
    cout << (s1 < s2) << endl; // should output 0
    cout << s2 + 2 << endl; // should output "cdefgh"
    return 0;
}
