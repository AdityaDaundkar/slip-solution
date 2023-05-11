//Slip 30 - A) Write C++ program to create two classes Integer_Array and Float_Array with an array as a data member. Write necessary member functions to accept and display array elements of both the classes. Find and display average of both the array. (Use Friend function)
#include <iostream>
using namespace std;

class Float_Array; // forward declaration

class Integer_Array {
private:
    int arr[100];
    int size;
public:
    Integer_Array() {
        size = 0;
    }
    void accept() {
        cout << "Enter the size of the integer array: ";
        cin >> size;
        cout << "Enter " << size << " integer elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "The integer array is:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend float calculate_average(Integer_Array ia, Float_Array fa);
};

class Float_Array {
private:
    float arr[100];
    int size;
public:
    Float_Array() {
        size = 0;
    }
    void accept() {
        cout << "Enter the size of the float array: ";
        cin >> size;
        cout << "Enter " << size << " float elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "The float array is:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend float calculate_average(Integer_Array ia, Float_Array fa);
};

float calculate_average(Integer_Array ia, Float_Array fa) {
    int integer_sum = 0;
    float float_sum = 0;
    for (int i = 0; i < ia.size; i++) {
        integer_sum += ia.arr[i];
    }
    for (int i = 0; i < fa.size; i++) {
        float_sum += fa.arr[i];
    }
    float integer_avg = static_cast<float>(integer_sum) / ia.size;
    float float_avg = float_sum / fa.size;
    cout << "The average of the integer array is: " << integer_avg << endl;
    cout << "The average of the float array is: " << float_avg << endl;
    return float_avg;
}

int main() {
    Integer_Array ia;
    ia.accept();
    ia.display();

    Float_Array fa;
    fa.accept();
    fa.display();

    calculate_average(ia, fa);
    return 0;
}
