//Slip 27 - B) Create a base class Travels with data members T_no, Company_Name.Derive a class Route with data members Route_id, Source, and Destination from Travels class. Also derive a class Reservation with data members Number_of_Seats, Travels_Class, Fare, and Travel_Date from Route. Write a C++ program to perform following necessary member functions: i, Accept details of ‘n’ reservations. ii. Display details of all reservations. iii. Display reservation details of a specified Date.
//Solution:
#include<conio.h>
#include<iostream>

using namespace std;
class train
{
   protected:
   int tno;
   char name[10];
   public:
   void accept()
   {
	cout<<"\nEnter train no: ";
	cin>>tno;
	cout<<"\nEnter train name: ";
	cin>>name;
   }
};

class route: public train
{
   public:
   int rid;
   char s[10],d[10];
   void acc()
   {
      cout<<"\nEnter train id: ";
      cin>>rid;
      cout<<"\nEnter train source: ";
      cin>>s;
      cout<<"\nEnter destination: ";
      cin>>d;
   }
};

class reser: public route
{
   public:
   int  nos,fare,dd,mm,yyyy;
   char clas[10];
   void ac()
   {
      cout<<"\nEnter no of seats: ";
      cin>>nos;
      cout<<"\nEnter train class: ";
      cin>>clas;
      cout<<"\nEnter date(dd mm yyyy): ";
      cin>>dd>>mm>>yyyy;
   }
   void dis()
   {

      cout<<"\nTrain no\t\t:\t"<<tno;
      cout<<"\nTrain name\t\t:\t"<<name;
      cout<<"\nTrain id\t\t:\t"<<rid;
      cout<<"\nTrain source\t\t:\t"<<s;
      cout<<"\nTrain destination\t: \t"<<d;
      cout<<"\nNo of seats\t\t:\t"<<nos;
      cout<<"\nTrain class\t\t:\t"<<clas;
      cout<<"\nTrain date\t\t:\t"<<dd<<"/"<<mm<<"/"<<yyyy<<"\n";
   }
};
int main()
{
  
   int i,s;
   reser r[20];
   cout<<"Enter how many details you want to enter: ";
   cin>>s;
   for(i=0;i<s;i++)
   {
	r[i].accept();
	r[i].acc();
	r[i].ac();
   }
   for(i=0;i<s;i++)
   {
	r[i].dis();
   }

}
