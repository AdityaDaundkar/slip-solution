#include<iostream>
#include<cstring>

using namespace std;

class Vector {
private:
    int size;
    int* ptr;
public:
    Vector(int s) {
        size = s;
        ptr = new int[size];
    }

    Vector(const Vector& v) {
        size = v.size;
        ptr = new int[size];
        memcpy(ptr, v.ptr, size * sizeof(int));
    }

    ~Vector() {
        delete[] ptr;
    }

    void accept() {
        cout << "Enter the elements of the vector: ";
        for (int i = 0; i < size; i++) {
            cin >> ptr[i];
        }
    }

    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << ptr[i];
            if (i != size - 1) {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }

    Vector operator+(const Vector& v) {
        Vector result(size);
        for (int i = 0; i < size; i++) {
            result.ptr[i] = ptr[i] + v.ptr[i];
        }
        return result;
    }
};

int main() {
    Vector v1(3);
    v1.accept();
    v1.display();

    Vector v2(v1);
    v2.display();

    Vector v3 = v1 + v2;
    v3.display();

    return 0;
}

