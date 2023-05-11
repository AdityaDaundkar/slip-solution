//Slip 20 - B) Create a C++ class for inventory of Mobiles with data members Model, Mobile _Company, Color, Price and Quantity. Mobile can be sold, if stock is available, otherwise purchase will be made. Write necessary member functions for the following: i. To accept mobile details from user. ii. To sale a mobile. (Sale contains Mobile details & number of mobiles to be sold.) iii. To Purchase a Mobile. (Purchase contains Mobile details & number of mobiles to be purchased).
//Solution:
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class inventory
{
    int mno;
    char mname[30]; 
    int stock;
    float price; 

    public :
    void accept()
    {
        cout<<"\n Enter model no :"; cin>>mno;
        cout<<"\n Enter model name : "; cin>>mname;
        cout<<"\n enter price : "; cin>>price;
        cout<<"\n Enter stock : "; cin>>stock;
    }
    void display()
    {
        cout<<"\n model no is : "<<mno<<"\n model name : "<<mname<<"\n price : "<<price<<"\n stock :"<<stock;
    }

    int sale(int no,int q)
    {
        if(mno==no)
        { 
            if(stock>=q)
            {
                stock  =stock-q; 
                cout<<"\n sale is done : "; 
                display();
                return 2;
            }   
            else
            {
                cout<<"\n purchse is requried .";
                //purchase(); 
                return 1;
            }
        }
        /*else
        {
            cout<<"Please enter correct model number\n";
        }*/

 	}

    void purchase(int no,int q)
    {
        if(no==mno)
        {
            stock=stock+q;
            cout<<"\n purchase is done..."; 
            display();
        }
    }
};

int main()
{
    inventory in[10];
    int qt,ans,no,i;

    cout<<"\n Enter no of models : "; 
    int n;
    cin>>n;

    for(int i=0;i<n;i++) 
    in[i].accept();
    cout<<"===================================";
    for(i=0;i<n;i++) 
    {
        in[i].display();
    }

    cout<<"\n Enter model number to be purchaes and quantity : "; 
    cin>>no;
    cin>>qt; 
    for(i=0;i<n;i++)
    {	
        ans=in[i].sale(no,qt) ;
        if(ans==1)
    {
        cout<<"\n Enter model to be purchaes and quantity : "; 
        cin>>no;
        cin>>qt; 
        for(i=0;i<n;i++)
        {	
            in[i].purchase(no,qt);
        }
    }
    }
    return 0;
}
