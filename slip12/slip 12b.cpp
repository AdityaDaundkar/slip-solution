//Slip 12 - B) Create a C++ class Weight with data members kilogram, gram. Write a C++ program using operator overloading to perform following functions: i. To accept weight. ii. To display weight in kilogram and gram format. iii. Overload += operator to add two weights. iv. Overload == operator to check equality of two weights.
// Solution:
#include<iostream.h>

#include<conio.h>

class Weight

{

int kilogram,gram;

public:

void getdata()

{

cout<<"\n\nEnter the kilogram:\t";

cin>>kilogram;

cout<<"\nEnter the gram:\t";

cin>>gram;

}

void display()

{

cout<<"\nAddition of two distance:\t";

cout<<kilogram<<"."<<gram;

}

void display2()

{

cout<<kilogram<<"."<<gram;

}

Weight operator+=(Weight &d)

{

Weight t;

t.kilogram=d.kilogram+kilogram;

t.gram=d.gram+gram;

return t;

}

int operator==(Weight &d)

{

if(kilogram==d.kilogram  || gram==d.gram)

{

return 1;

}

else

{

return 0;

}

}

};

void main()

{

Weight c1,c2,c3,c4,c5;

clrscr();

c1.getdata();

c2.getdata();

c3=c1+=c2;

c3.display();

c4.getdata();

c5.getdata();

if(c4==c5)

{

cout<<"\n";

c4.display2();

c5.display2();

cout<<"\t Both are same\t";

}

else

{

cout<<"\n";

c5.display2();

c4.display2();

cout<<"\t Both are not same\t";

}

getch();

}

