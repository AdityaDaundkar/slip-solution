//Slip 10 - A) Write a C++ program to create a class Account with data members Acc_number, Acc_type and Balance. Write member functions to accept and display ‘n’ account details. (Use dynamic memoryallocation).
// Solution:
#include <iostream>
using namespace std;

class Account {
  private:
    int Acc_number;
    char Acc_type;
    float Balance;

  public:
    void accept_details() {
        cout << "Enter account number: ";
        cin >> Acc_number;
        cout << "Enter account type: ";
        cin >> Acc_type;
        cout << "Enter balance: ";
        cin >> Balance;
    }
    void display_details() {
        cout << "Account number: " << Acc_number << endl;
        cout << "Account type: " << Acc_type << endl;
        cout << "Balance: " << Balance << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;
    Account* accounts = new Account[n]; // dynamic memory allocation

    for (int i = 0; i < n; i++) {
        cout << "Enter details for account " << i + 1 << ":" << endl;
        accounts[i].accept_details();
    }
    cout << endl << "Account details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Account " << i + 1 << ":" << endl;
        accounts[i].display_details();
        cout << endl;
    }
    delete[] accounts; // free the allocated memory
    return 0;
}
