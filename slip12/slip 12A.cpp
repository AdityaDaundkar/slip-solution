#include <iostream>
#include <string>

using namespace std;

class Date {
   private:
    int day, month, year;

   public:
    // Default constructor
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Parameterized constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Display the date in dd-Mon-yyyy format
    void displayDate() {
        string monthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        cout << day << "-" << monthNames[month - 1] << "-" << year << endl;
    }
};

int main() {
    Date date1;           // Use default constructor
    Date date2(4, 1, 2021); // Use parameterized constructor

    date1.displayDate();  // Display date in dd-Mon-yyyy format
    date2.displayDate();  // Display date in dd-Mon-yyyy format

    return 0;
}
