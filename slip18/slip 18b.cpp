//Slip 18 - B) Create a C++ class MyArray with data members - int *arr - int size Write necessary member functions to accept and display Array elements. Overload the following operators: Operator Example Purpose - (Unary) -Al Reverse array elements. +(Binary) A2=A+n Add constant n to all array elements
#include <iostream>
using namespace std;

class MyArray {
private:
    int *arr;
    int size;

public:
    MyArray(int sz) {
        size = sz;
        arr = new int[size];
    }

    void accept() {
        cout << "Enter array elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    MyArray operator-() {
        MyArray result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = arr[size - i - 1];
        }
        return result;
    }

    MyArray operator+(int n) {
        MyArray result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = arr[i] + n;
        }
        return result;
    }
};

int main() {
    MyArray A(5);
    A.accept();
    A.display();

    MyArray B = -A;
    B.display();

    MyArray C = A + 3;
    C.display();

    return 0;
}
