//Slip 21 - B) Create a C++ class for a two dimensional points. Write necessary member functions to accept & display the point object. Overload the following operators: Operator Example Purpose + (Binary) P3=P1+P2 Adds coordinates of point pl and p2. - (Unary) -Pl Negates coordinates of point p1. *(Binary) P2=P1*n Multiply coordinates of point pl by constant ‘n’.
//Solution:
#include<iostream>
#include<conio.h>

using namespace std;
class point
 
{
int x,y;
public:
void get()
{
cout<<"\nEnter 2-Dimensional points: ";
cin>>x>>y;
}
 
void disp()
{
cout<<x<<"\t"<<y<<"\t"<<endl;
}
 
point operator+(point &t)
{
point tp;
tp.x=x+t.x;
tp.y=y+t.y;
return tp;
}
void operator -()
{
x=-x;
y=-y;

disp();
}

void operator *()
{
int n;
cout<<"Enter value of n:\n";
cin>>n;

x=-x;
y=-y;


x=x*n;
y=y*n;

disp();
}
};



int main()
{
point p1,p2,p3;
int ch;
p1.get();
p2.get();
 
cout<<"\nFirst 2-Dimensional point: ";
p1.disp();
cout<<"\nSecond 2-Dimensional point: ";
p2.disp();

do{
    cout<<"1 Addition\n";
    cout<<"2 Negates coordinates of point p1\n";
    cout<<"3 Mltiplication of coordinates of point pl by constant ‘n’\n";
    cout<<"4 Exit\n";
    cin>>ch;
    switch(ch)
    {
    case 1: p3=p1+p2;
    cout<<"\nAdded point: ";
    p3.disp();
    break;
    
    case 2: cout<<"\n\nNegated co-ordinate of p1: ";
            -p1;
            break;
    
    case 3: *p1;
    break;
    case 4:exit(0);
    }
}while(ch!=4);


return 0;
}
