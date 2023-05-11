//Slip 6 - B) Create a C++ class class Matrix { int **p; intr, ¢; public: // member functions }; Write necessary member functions to: i. Accept Matrix elements ii. Display Matrix elements. iii, Calculate transpose of a Matrix. (Use constructor and destructor).
 //Solution:
#include<iostream>
#include<conio.h>

using namespace std;

class matrix
{
	    int **a,i,j,r,c;
public:
	    matrix()           // Dynamic Constructor
	    {
			cout<<"Enter Row and Coloum of Matrix :\n";
			cin>>r>>c;
			a=new int*[r];
			for(i=0; i<r; i++)
			    {
				    a[i]=new int[c];
			    }
	     }
	     void accept()
	     {
			cout<<"Enter elements for matrix:\n";
			for(i=0; i<r; i++)
			{
				for(j=0; j<c; j++)
				    {
					cin>>a[i][j];
				    }
			}
	    }
	    void display()
	     {
			cout<<"Elements of matrix are:\n";
			for(i=0; i<r; i++)
			{
				for(j=0; j<c; j++)
				    {
					cout<<a[i][j]<<"\t";
				    }
				    cout<<endl;
			}
	    }
	    void transpose()
	    {
			cout<<"Transpose of Matrix is :\n";
			for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					cout<<a[j][i]<<"\t";
				}
				cout<<endl;
			}
	    }
};

int main()
{

	matrix obj1;
	obj1.accept();
	obj1.display();
	obj1.transpose();

}
