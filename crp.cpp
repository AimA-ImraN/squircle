#include<iostream>
using namespace std;
main()
{
float c,r,vkg,fkg;
int kgv,kgf;
cout<<"Enter vegetables price per kg(in coins):";
cin>>vkg;
cout<<"Enter fruits price per kg(in coins): " ;
cin>>fkg;
cout<<"Enter total kgs of vegetables:";
cin>>kgv;
cout<<"Enter total kgs of fruits:";
cin>>kgf;
r=(1.94*vkg)+(1.94*fkg);
cout<<"Total earings in Ruppees:"<<r;
}
