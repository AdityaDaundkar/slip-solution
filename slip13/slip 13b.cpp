//Slip 13 - B) Create a C++ class Cuboid with data members length, breadth, and height. Write necessary member functions for the following: i. void setvalues(float,float,float) to set values of data members. ii. void getvalues( ) to display values of data members. iii. float volume( ) to calculate and return the volume of cuboid. iv. float surface_area( ) to calculate and return the surface area of cuboid. (Use Inline function)
 //Solution:
#include<stdio.h>

#include<conio.h>

#include<iostream.h>

class Cuboid

{

float a,b,c;

public:

void getdata()

{

cout<<"\n Enter the Details : ";

cin>>a>>b>>c;

}

void setdata()

{

cout<<a<<b<<c;

}

inline void volume()

{

cout<<"\n The volume of cuboid. =\t"<<a*b*c;

}

inline void surface_ area()

{

cout<<"\n The surface area of cuboid =\t"<<2ab+2ac+2bc;

}

};

void main()

{

clrscr();

Cuboid c;

c.getdata();

c.volume();

c.surface_ area();

getch();

}    
