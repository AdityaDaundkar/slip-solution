//Slip 21 - A) Create a C++ class Employee with data members Emp_id, EmpName, Company_Name and Salary. Write member functions to accept and display Employee information. Design User defined Manipulator to print Salary. (ForSalary set right justification, maximum width to 7 and fill remaining spaces with ‘*’).
//Solution:
#include<iostream>
#include<conio.h>
#include<iomanip> 
using namespace std;
class person
{
   char e_name[10],c_name[10]; 
   int sal, eid;
   public:
   void accept()
   {
   	cout<<"Enter employee id: ";
   	cin>>eid;
   	cout<<"Enter employee name: ";
      cin>>e_name;
      cout<<"Enter company name: ";
      cin>>c_name;
      cout<<"Enter salary: ";
      cin>>sal;
      
   }
   void disp()
   {
   		cout<<"Employee id:"<<eid;
      	cout<<"\nEmployee name: "<<e_name;
      	cout<<"\nCompany name "<<c_name;
      	cout.width(7);
      	cout.fill('*');
      	cout.right;
      	cout<<"\nEmployee Salary: "<<setw(7)<<sal;
   }
};
int main()
{
	int i;
   person *p; 
   p=new person[5];
   cout<<"Enter details of 5 person"<<endl;
   for(i=0; i<5; i++)
   {
   	 p[i].accept();
   }
   for(i=0; i<5; i++)
   {
   	 p[i].disp();
   }
   
   
   return(0);
}
