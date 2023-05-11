#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Machine {
private:
    int Machine_Id;
    string Machine_Name;
    double Price;
public:
    Machine(int id, string name, double price) {
        Machine_Id = id;
        Machine_Name = name;
        Price = price;
    }
    Machine(const Machine& other) {
        Machine_Id = other.Machine_Id;
        Machine_Name = other.Machine_Name;
        Price = other.Price;
    }
    void display() const {
        cout << setw(10) << "Machine ID: " << Machine_Id << endl;
        cout << setw(10) << "Name: " << Machine_Name << endl;
        cout << fixed << setprecision(2) << setw(10) << "Price: $" << Price << endl;
    }
};

int main() {
    Machine m1(1234, "Lathe Machine", 2500.50);
    Machine m2 = m1;

    m1.display();
    m2.display();

    return 0;
}
