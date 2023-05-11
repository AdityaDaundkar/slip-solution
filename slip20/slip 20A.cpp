//Slip 20 - A) Create a C++ class Number with integer data member. Write necessary member functions to overload the operator unary pre and post increment ‘++’.
//Solution:
#include <iostream>
using namespace std;

class Number
{
    private:
       int i;
    public:
       Number() {  }
       Number(int num)
       {
       	    i=num;
	   }
       Number operator ++() 
        { 
              ++i;
		    return *this; 
        }
        Number operator ++(int )
        {
          	Number temp=*this;
          	i++;
          	return temp;
		}
       void Display() 
        { 
            cout << "i=" << i << endl; 
        
        }
};

int main()
{
    Number obj(5),obj1(5);

    cout<<"Original Number = "<<endl;
    obj.Display();
    ++obj; 
    cout<<"After pre-increment number is = "<<endl;
    obj.Display();
    obj1++;
    cout<<"After post-increment number is = "<<endl;
    obj1.Display();

    return 0;
}
