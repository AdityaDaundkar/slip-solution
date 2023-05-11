//Slip 15 - B) Write a C++ class Seller (S_Name, Product_name, Sales_Quantity, Target_Quantity, Month, Commission). Each salesman deals with a separate productand is assigned a target for a month. At the end of the month his monthly sales is compared with target and commission is calculated as follows: If Sales_Quantity>Target_Quantity then commission is 25% of extra sales made + 10% of target. If Sales_Quantity = Target_Quantity then commission is 10% of target. Otherwise commission is zero. Display salesman information along with commission obtained. (Use array of objects).
 //Solution:
#include<iostream.h>

#include<conio.h>

class sales

{

char sname[20],pname[20];

int squantity,target;

float commission;

public:

void get()

{

cout<<"Enter salesman name:\t";

cin>>sname;

//clrscr();

cout<<"\nEnter product name:\t";

cin>>pname;

//clrscr();

cout<<"\nEnter sales quantity:\t";

cin>>squantity;

//clrscr();

cout<<"\nEnter target:\t";

cin>>target;

//clrscr();

}

void put()

{

cout<<"\nSalesman name:\t"<<sname;

cout<<"\nProduct name:\t"<<pname;

cout<<"\nSales quantity:\t"<<squantity;

cout<<"\nTarget:\t"<<target;

commission=0;

if(squantity>target)

{

commission=commission+((squantity-target)*0.25)+(target*0.10);

}

else if(target=squantity)

{

commission=commission+(target*0.10);

}

else

{

commission=0;

}

cout<<"\nCommission:\t"<<commission;

}

};
void main()
{
sales sman[10];
int i,n;
clrscr();
 cout<<"\n Enter how many Salesman : ";
 cin>>n;
                for(i=0;i<n;i++)
                {
             sman[i].get();
                  }

        for(i=0;i<n;i++)
                {
             sman[i].put();
               }
getch();

}
