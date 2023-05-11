//Slip 4 - A) Write a C++ program to accept Worker information Worker_Name, No_of_Hours_worked, Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use default value for Pay_Rate)
// Solution:
#include<iostream>
using namespace std;

class WorkerInformation {
    char Worker_Name[50];
    int No_Of_Hours_Worked, Salary;

    public:
        void acccept() {
            cout << "Enter name of the worker: ";
            cin >> Worker_Name;

            cout << "Enter number of hours worked: ";
            cin >> No_Of_Hours_Worked;

           
        }

        void display() {
            cout << endl << "Worker details" << endl;
            cout << "Name: " << Worker_Name << endl;
            cout << "Salary: " << calSal(No_Of_Hours_Worked) << endl;
        }

        int calSal(int work_hrs, int pay_rate=100) {
            return (work_hrs*pay_rate);
        }
};


int main() {
    WorkerInformation w;

    w.acccept();
    w.display();
    return 0;
}
