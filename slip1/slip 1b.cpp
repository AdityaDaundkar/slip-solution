//Slip 1 - B) Create a C++ class MyFile with data membersfile pointer and filename. Write necessary member functions to accept and display File. Overload the following operators: Operator Example Purpose + F3=F1+F2 Concatenate the contents of file F1 and F2 in F3. ! !F3 Changesthe case of alternate characters of file F3.
//Solution: 
#include <stdio.h>
#include <stdlib.h>
#include <istream>
#include <conio.h>
#include <ctype.h>
#include <fstream>
#include <iostream>

using namespace std;

#include <string.h>
#define MAXSIZE (10)

class myfile
{
    FILE *fp;
    char fn[MAXSIZE];

public:
    myfile(const char *fname)
    {
        strcpy(fn, fname);
    }
    myfile operator+(myfile);
    void operator!();
    void display();
};
void myfile::display()
{
    fp = fopen(fn, "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        cout << ch;
    }
    fclose(fp);
}
void myfile::operator!()
{
    myfile f4("sy.txt");
    char ch;
    fp = fopen(fn, "r");
    f4.fp = fopen(f4.fn, "w");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isupper(ch))
            fputc(tolower(ch), f4.fp);
        else if (islower(ch))
            fputc(toupper(ch), f4.fp);
        else
            fputc(ch, f4.fp);
    }
    fclose(fp);
    fclose(f4.fp);
    remove("abc.txt");
    rename("sy.txt", "abc.txt");
}
myfile myfile::operator+(myfile f2)
{
    myfile f3("abc.txt");
    fp = fopen(fn, "r");
    f2.fp = fopen(f2.fn, "r");
    f3.fp = fopen(f3.fn, "w");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, f3.fp);
    }
    fclose(fp);
    while ((ch = fgetc(f2.fp)) != EOF)
    {
        fputc(ch, f3.fp);
    }
    _fcloseall();
    return f3;
}
int main()
{
    myfile f1("xyz.txt");
    myfile f2("lmn.txt");
    myfile f3("abc.txt");

    cout << "first file \n";
    f1.display();
    cout << "\nsecond file \n";
    f2.display();
    f3 = f1 + f2;
    cout << "\nAfter concatnation file is ";
    f3.display();
    cout << "\nAfter changes case \n";
    !f3;
    f3.display();

    return 0;
}
