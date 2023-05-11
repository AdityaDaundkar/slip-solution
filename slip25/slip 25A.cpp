//Slip 25 - A) Write a C++ program to calculate mean, mode and median of three integer numbers. (Use Inline function)
#include <iostream>
#include <algorithm>

using namespace std;

inline float mean(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

inline float median(int a, int b, int c)
{
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
    return arr[1];
}

inline int mode(int a, int b, int c)
{
    if (a == b && b == c)
        return a;
    else if (a == b)
        return a;
    else if (b == c)
        return b;
    else if (a == c)
        return a;
    else
        return -1; // no mode
}

int main()
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "Mean = " << mean(a, b, c) << endl;
    cout << "Median = " << median(a, b, c) << endl;
    int modeVal = mode(a, b, c);
    if (modeVal != -1)
        cout << "Mode = " << modeVal << endl;
    else
        cout << "No mode found" << endl;

    return 0;
}
