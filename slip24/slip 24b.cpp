//Slip 24 - B) Create a C++ class InvoiceBill with data members Order_id, O_Date, Customer_Name, No_of_Products, Prod_Name[], Quantity[], Prod_Price[]. A Customer can buy ‘n’ products. Accept quantity for each product. Generate and Display the bill using appropriate Manipulators. (Use new operator)
//Solution:
 #include<iostream.h>

#include<conio.h>

#include<string.h>

 class InvoiceBill

 {

int oid,No_of_Products;

int quntity[10],price[10],k;

char name[10],pname[10][30];

 public:

void getdata()

{

cout<<"\n\n Enter the name:- ";

cin>>name;

cout<<"\n\n Enter the oid:- ";

cin>>oid;

cout<<"\n\n Enter the No_of_Products:- ";

cin>>No_of_Products;

for(k=0;k<No_of_Products;k++)

{

cout<<"\n\n Enter the pname:- ";

cin>>pname[k];

cout<<"\n\n Enter the quntity:- ";

cin>>quntity[k];

cout<<"\n\n Enter the price:- ";

cin>>price[k];

}

}

 void display()

{

cout<<"\n Oid:-"<<oid;

cout<<"\n Name:-"<<name;

cout<<"\n No_of_Products:-"<<No_of_Products;

for(k=0;k<No_of_Products;k++)

{

cout<<"\n PName:-"<<pname[k];

cout<<"\n Quantity:-"<<quntity[k];

cout<<"\n Price:-"<<price[k];

}

}

void calculate()

{

int total=0;

for(k=0;k<No_of_Products;k++)

{

//cout<<"Bill.:-"<<quntity[k]*price[k];

total+=quntity[k]*price[k];

}

cout<<"\n Total Amount:-"<<total;

}

};

const int size=2;

 void main()

{

 clrscr();

  InvoiceBill * p=new InvoiceBill[10];

//inventory * d=p;

  //InvoiceBill s[10];

int i,n;

cout<<"\n How many records you waant?";

cin>>n;

for(i=0;i<n;i++)

{

p[i].getdata();

}

 for(i=0;i<n;i++)

{

p[i].display();

}

for(i=0;i<n;i++)

{

p[i].calculate();

}

getch();

 }
