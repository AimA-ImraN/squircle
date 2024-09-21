#include<iostream>
using namespace std;
main()
{
int age,moved,house;
cout<<"Enter the person's age :";
cin>>age;
cout<<"Enter the number of times they have moved:";
cin>>moved;
house=age/(moved+1);
cout<<"Average no. of years they lived in the same house is"<<house ;
}
