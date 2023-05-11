#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    // Parameterized constructor
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Member function to accept a time
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Member function to display a time in format hh:mm:ss
    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Member function to find difference between two times and display it in format hh:mm:ss
    Time timeDifference(Time t) {
        int s1, s2, diff;
        Time temp;

        s1 = hours * 3600 + minutes * 60 + seconds;
        s2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        diff = abs(s1 - s2);

        temp.hours = diff / 3600;
        diff = diff % 3600;
        temp.minutes = diff / 60;
        temp.seconds = diff % 60;

        return temp;
    }
};
int main() {
    Time t1, t2, diff;

    t1.setTime(3, 20, 45);
    t2.setTime(2, 10, 30);

    cout << "Time 1: ";
    t1.displayTime();

    cout << "Time 2: ";
    t2.displayTime();

    diff = t1.timeDifference(t2);
    cout << "Time difference: ";
    diff.displayTime();

    return 0;
}

