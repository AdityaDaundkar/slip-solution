//Slip 8 - B) Create a C++ class Person with data members Person_name, Mobile_number, Age, City. Write necessary member functions for the following: i. Search the mobile number of given person. ii. Search the person name of given mobile number. iii. Search all person details of given city. (Use function overloading)
 //Solution:    
#include<iostream>
#include<string.h>
class person
 {
     char name[10],city[10],mno[12];
     public:
     void accept()
     {
                std::cout<<"\n Enter name : ";
                std::cin>>name;
                std::cout<<"\n Enter city : ";
                std::cin>>city;
               std::cout<<"\n Enter mob no : ";
                std::cin>>mno;
     }

     void display()
     {
                std::cout<<"\n Name of person = "<<name;
                std::cout<<"\n city = "<<city<<"\n mobile no = "<<mno;
                std::cout<<"\n=======================================";
     }

     int display(char a[])
     {
                if(strcmp(name,a)==0)
                 { 
				 std::cout<<"mno="<<mno;
                   return 1;
                 }
                   return 0;
     }


     int display(char mbno[],int no)
     {
                if(strcmp(mno,mbno)==0)
                 {
                                display();
                   return 1;
                 }
                   return 0;
                }

};

int main()
 {
    int n,i,cnt=0,ans;
    char sname[20],mbno[12];
    person ob[20];
  
    std::cout<<"\n Enter no of persons : ";
    std::cin>>n;
    for(i=0;i<n;i++)
     {
                ob[i].accept();
     }

    for(i=0;i<n;i++)
     {
                ob[i].display();
     }

    std::cout<<"\n Enter name of person to be search : ";
    std::cin>>sname;
    for(i=0;i<n;i++)
     {
                ans=ob[i].display(sname);
                if(ans==1)
                cnt++;
     }
      if(cnt==0)
      std::cout<<"\n person not found\n ";

   std::cout<<"\n Enter mobile no to be search : ";
    std::cin>>mbno;
                cnt=0,ans=0;
    for(i=0;i<n;i++)
     {
                 ans=ob[i].display(mbno,1);
                 if(ans==1)
                 cnt++;
     }
       if(cnt==0)
       std::cout<<"\n person not found\n";


   return 0;
}

