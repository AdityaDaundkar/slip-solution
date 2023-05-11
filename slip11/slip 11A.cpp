//Slip 11 - A) Create a C++ class MyArray, which contains single dimensional integer array of a given size. Write a member function to display sum of given array elements. (Use Dynamic Constructor and Destructor)
 //Solution:
#include<stdio.h>

#include<conio.h>

#include<iostream.h>

class MyArray

{

int size,*ptr,*p;

int sum=0;

public:

MyArray(int no)

{

size=no;

ptr=new int[size];

for(int i=0;i<size;i++)

{

cout<<"enter elementS";

cin>>ptr[i];

sum = sum + ptr[i];

}

}

 void display()

{

cout<<"elements are";

for(int i=0;i<size;i++)

{

cout<<ptr[i]<<"\t";

}

cout<<"\n\nSum of all elements is: "<<sum;

}

 Void sum()

{

            int arr[10];

            int i;

            int sum=0;

            cout<<"Enter 10 array elements: ";

            for(i=0; i<10; i++)

            {

                        cin>>arr[i];

                        sum = sum + arr[i];

            }

            cout<<"\nThe array elements are: \n";

            for(i=0; i<10; i++)

            {

                        cout<<arr[i]<<"  ";

            }

            cout<<"\n\nSum of all elements is: "<<sum;

 }

  ~MyArray()

{delete ptr;

}

 };

 void main()

{

int n;

clrscr();

cout<<"enter size";

cin>>n;

MyArray d(n);

d.display();

d.sum();

getch();

}
