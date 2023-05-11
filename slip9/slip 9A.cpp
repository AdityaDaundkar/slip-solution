//Slip 9 - A) Considerthe following C++ class class Person { char Name [20]; charA ddr[30]; float Salary; float tax_amount; public: // member functions }; Calculate tax amount by checking salary of a person For salary <=20000 tax rate=0 For salary >20000 || <=40000 tax rate= 5% of salary. For salary >40000 tax rate =10% of salary.
 //Solution:
 #include <iostream>
#include <string.h>
using namespace std;

class Person {
    char Name[20];
    char Address[30];
    float Salary;
    float tax_amount;

public:
    // constructor
    Person(char name[], char address[], float salary) {
        strcpy(Name, name);
        strcpy(Address, address);
        Salary = salary;
        CalculateTax();
    }

    // member function to calculate tax amount
    void CalculateTax() {
        if (Salary <= 20000)
            tax_amount = 0;
        else if (Salary > 20000 && Salary <= 40000)
            tax_amount = Salary * 0.05;
        else
            tax_amount = Salary * 0.1;
    }

    // member function to display the details of the person
    void Display() {
        cout << "Name: " << Name << endl;
        cout << "Address: " << Address << endl;
        cout << "Salary: " << Salary << endl;
        cout << "Tax amount: " << tax_amount << endl;
    }
};

int main() {
    char name[20], address[30];
    float salary;
    
    // input details from the user
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter salary: ";
    cin >> salary;
    
    // create a person object and display the details
    Person p(name, address, salary);
    p.Display();
    
    return 0;
}

