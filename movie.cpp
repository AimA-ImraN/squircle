#include<iostream>
using namespace std;
main()
{
char mv;
int d,t,atp,ctp,ats,cts,c,x,r;
cout<<"Enter the name of movie:";
cin>>mv;
cout<<"Enter the adult ticket price: $" ;
cin>>atp<<endl;;
 cout<<"Enter the child ticket price: $";
cin>>ctp;
cout<<"Enter the no. of adult tickets sold:";
cin>>ats;
cout<<"Enter the no. of child tickets sold:";
cin>>cts;
cout<<"Enter the percentage of the amount to be donated to charity:" ;
cin>>d;
cout<<"MOVIE:"<<mv <<endl;
t=(atp*ats)+(ctp*cts);
cout<<"Total amount generated by ticket sales: $" <<t <<endl;
x=(t*d)/100;
cout<<"Donation to the charity("<<d<<"%):$ " <<x<<endl;
r=t-x;
cout<<"Remaining amount after donation:$"<<r<<endl;
}
