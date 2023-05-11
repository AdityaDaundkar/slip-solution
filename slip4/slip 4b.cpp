//Slip 4 - B) Write a C++ program to create a base class Employee (Emp-code, name, salary). Derive two classes as Fulltime (daily_wages, number_of_days) and Parttime (number_of_workinghours, hourly_wages). Write a menu driven program to perform following functions: 1. Accept the details of ‘n’? employees and calculate the salary. 2. Display the details of ‘n’ employees. 3. Display the details of employee having maximum salary for both types of employees.
 //Solution:
#include<iostream>
using namespace std;
const int m=50;

class emp
{
        public:
                int empcode;
                char empname[30];
                int salary;
        public:
                void get()
                {
                        cout<<"\n Enter Employee No.   :  ";
                        cin>>empcode;
                        cout<<"\n Enter Employee Name  :  ";
                        cin>>empname;
                        
                }
};
class fulltime:public emp
{
        public:
                float daily_wages;
                int no_of_days;
                
        public:
                void getdata()
                {
                        cout<<"\n Enter Daily Rate     :  ";
                        cin>>daily_wages;
                        cout<<"\n Enter No. of Days    :  ";
                        cin>>no_of_days;
                }
                void cal()
                {
                        salary=daily_wages*no_of_days;
                        cout<<"\n Salary               :  "<<salary;
                }
                void show()
                {
                        cout<<"\n ----------------------------------\n";
                        cout<<"\n Employee Number    :  "<<empcode;
                        cout<<"\n Employee Name      :  "<<empname;
                        cout<<"\n Salary             :  "<<salary;
                        cout<<"\n Status             :  Fulltime";
                        cout<<"\n ----------------------------------\n";
                }
};
class parttime:public emp
{
        public:
                int hourly_wages;
                int working_hours;
                
        public:
                void get1()
                {
                        cout<<"\n Enter Hourly Rate    :  ";
                        cin>>hourly_wages;
                        cout<<"\n Enter Working Hours  :  ";
                        cin>>working_hours;
}
void cal1()
{
                        salary=hourly_wages*working_hours;
                        cout<<"\n Salary               :  "<<salary<<endl;
                }
                void show1()
                {
                        cout<<"\n ----------------------------------\n";
                        cout<<"\n Employee No     :  "<<empcode;
                        cout<<"\n Employee Name   :  "<<empname;
                        cout<<"\n Salary          :  "<<salary;
                        cout<<"\n Status          :  Part time";
                        cout<<"\n ----------------------------------\n";
                }
};
int main()
{

        int const cnt=5;
        int var=0;
        int var1=0;
        fulltime f1[cnt];
        parttime p1[cnt];

        int x,i;
        do
        {
                cout<<"\n";
                cout<<"\n 1.Enter Record";
                cout<<"\n 2.Display Record";
                cout<<"\n 3.Search Record";
                cout<<"\n 4.Quit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>x;
                switch(x)
                {
                        case 1:
                                int y;
                                cout<<"\n 1. Fulltime Employee";
                                cout<<"\n 2. Parttime Employee \n";
                                cout<<"\n Enter : ";
                                cin>>y;
                                switch(y)
                                {
                                        case 1:
                                                f1[var].get();
                                                f1[var].getdata();
                                                f1[var].cal();
                                                var++;
                                                break;
                                        case 2:
                                                p1[var1].get();
                                                p1[var1].get1();
                                                p1[var1].cal1();
                                                var1++;
                                                break;
                                }
                                break;
                        case 2:
                                for(i=0; i<var; i++)
                                {
                                        f1[i].show();
                                }
                                for(i=0; i<var1; i++)
                                {
                                        p1[i].show1();
                                }
                        break;
                        case 3:
                                int a;
                                cout<<"\n Enter Employee No. : ";
                                cin>>a;
                                for (int i=0; i<var; i++)
                                {
                                        if (f1[i].empcode==a)
                                        {
                                                f1[i].show();
                                        }
                                        if(p1[i].empcode==a)
                                        {
                                                p1[i].show1();
                                        }
                                }
                }

        } while(x!=4);
return 0;
}


