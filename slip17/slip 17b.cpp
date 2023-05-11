//Slip 17 - B) Design two base classes Student (S_id, Name, Class) and Competition (C_id, C_Name). Derive a class Stud_Comp(Rank) from it. Write a menu driven program to perform following functions: i. Accept information. ii. Display information. iii. Display Student Details in the ascending order of Rank of a specified competition. (Use array of objects)
 //Solution:
#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
	public:
		int roll;
		char name[10],std[10];
		void accept_s();
		void display_s();
};

void Student :: accept_s()
{

	cout<<"Enter the Roll No : ";
	cin>>roll;
	cout<<"Enter The Name of Student : ";
	cin>>name;
	cout<<"Enter the Class of Student : ";
	cin>>std;
}

void Student :: display_s()
{
	cout<<"Student Details are : \n";
	cout<<roll<<"\t"<<name<<"\t"<<std<<endl;
}

class Competition
{
	public:
		int cid;
		char cname[10];
		void accept_c();
		void display_c();
};

void Competition :: accept_c()
{

	cout<<"Enter the Competition ID : ";
	cin>>cid;
	cout<<"Enter The Name of Competition : ";
	cin>>cname;
}

void Competition :: display_c()
{
	cout<<"Competition Details are : \n";
	cout<<cid<<"\t"<<cname<<endl;
}

class StudComp : public Student , public Competition
{
	public:
		int rank;
		void accept_sc();
		void display_sc();
		friend void sort(StudComp,int);

};

void StudComp :: accept_sc()
{
	cout<<"Enter the Rank : ";
	cin>>rank;
}
void StudComp :: display_sc()
{
	cout<<"Rank : "<<rank<<endl;
}

void sort(StudComp *sc,int num)
{
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(sc[j].rank>sc[j+1].rank)
			{
				int temp = sc[j].rank;
				sc[j].rank=sc[j+1].rank;
				sc[j+1].rank=temp;
				int tempr = sc[j].Student::roll;
				sc[j].Student::roll = sc[j+1].Student::roll;
				sc[j+1].Student::roll = tempr;
			 }
		 }
	 }
	 cout<<"Sorted Details : "<<endl;
	 for(int i=0;i<num;i++)
	 {
	   cout<<"Rank : "<<sc[i].rank<<" "<<"Roll NO : "<<sc[i].Student::roll<<"  "<<endl;
	 }

}
main()
{

		int num;
		cout<<"Enter the Number of Student : ";
		cin>>num;
		StudComp *sc = new StudComp[num];
		for(int i=0;i<num;i++)
		{
			sc[i].Student::accept_s();
			sc[i].Competition::accept_c();
			sc[i].StudComp::accept_sc();
			sc[i].Student::display_s();
			sc[i].Competition::display_c();
			sc[i].StudComp::display_sc();
		}
		sort(sc,num);


	
}
