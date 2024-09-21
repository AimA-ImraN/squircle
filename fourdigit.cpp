#include<iostream>
using namespace std;
main()
{
int s,x,y,r,z,p,q,sum;
cout<<"Enter a four digit number:";
cin>>x;
y=x%10;
z=x/10;
p=z%10;
q=z/10;
r=q%10;
s=q/10;
sum=y+p+r+s;
cout<<"the sum of the digits of the numbers is "<<sum;
}