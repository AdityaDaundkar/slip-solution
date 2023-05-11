//Slip 25 - B) Write a C++ program to read the contents of a “SampleData.txt” file. Create “Upper.txt” file to store uppercase characters, “Lower.txt” file to store lowercase characters, “Digit.txt” file to store digits and “Other.txt” file to store remaining characters of a given file.
 //Solution:
#include <istream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>

using namespace std;

int main()
{
    char fname[20];
    ifstream fin;
    ofstream fc, fu, fl, fd;
    cout << "\n Enter file name : ";
    cin >> fname;
    fin.open(fname, ios::in);
    fc.open("extra.txt", ios::out);
    fu.open("upper.txt", ios::out);
    fl.open("lower.txt", ios::out);
    fd.open("digit1.txt", ios::out);
    if (fin.fail())
    {
        cout << "File does not exists. ";
        exit(1);
    }
    char ch;
    while (!fin.eof())
    {
        ch = fin.get();
        if (islower(ch))
        {
            fl.put(ch);
            
        }
        else if (isupper(ch))
        {
            fu.put(ch);
            
        }
        else if (isdigit(ch))
        {
            fd.put(ch);
        }
        else if ((ch>31 && ch<48)||(ch>57 && ch<65)||(ch>122 && ch<127))
        {
            fc.put(ch);
        }
    }
    cout << "Task Completed....";
    return 0;
}
