//Slip 19 - A) Write a C++ program to create a class Distance with data members meter and centimeter to represent distance. Write a function Larger( ) to return the larger of two distances. (Use this pointer)
 //Solution:
#include<iostream>


class distance

{

int meter;

float centimeter;

public :

void get()

{

std::cout<<"Enter meter value";

std::cin>>meter;

std::cout<<"Enter centimeter";

std::cin>>centimeter;

}

void put()

{

std::cout<<"\t meter="<<this->meter;

std::cout<<"\t centimeter="<<this->centimeter;

}

distance larger(distance d1,distance d2)

{

if(d1.meter>d2.meter)

return d1;

else if(d1.meter<d2.meter)

return d2;

else

{

if(d1.centimeter>d2.centimeter)

return d1;

else

return d2;

}

}

};

int main()

{

distance d1,d2,d3;


std::cout<<"Enter First distance\n";

d1.get();

std::cout<<"Enter second distance\n";

d2.get();

d3=d3.larger(d1,d2);

std::cout<<"\nLarger Distance\n";

d3.put();

return 0;
}