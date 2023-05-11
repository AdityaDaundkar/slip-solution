//Slip 7 - A) Write a C++ program using class with data member char str[50] and function replace (char ch 1, char ch2) every occurrence of chl in str should be replaced with ch2 and return number of replacement it makes use default value for char ch2. (Use ch2 as Default Argument)
 //Solution:
#include <iostream>
#include <cstring>

class StringManipulator {
private:
    char str[50];

public:
    StringManipulator(const char* s) {
        std::strcpy(str, s);
    }

    int replace(char ch1, char ch2 = ' ') {
        int count = 0;
        for (int i = 0; i < std::strlen(str); i++) {
            if (str[i] == ch1) {
                str[i] = ch2;
                count++;
            }
        }
        return count;
    }

    void print() const {
        std::cout << str << std::endl;
    }
};

int main() {
    StringManipulator sm("hello world");
    std::cout << "Number of replacements: " << sm.replace('o') << std::endl;
    sm.print();
    return 0;
}
