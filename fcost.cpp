#include<iostream>
using namespace std;
main()
{
int s,c,a,cf,csq;
cout<<"Enter the size of fertilizer in pounds:"<<endl;
cin>>s;
cout<<"Enter the cost of bag: $" <<endl;
cin>>c;
 cout<<"Enter the area in square feet that can be covered by bag:";
cin>>a;
cf=c/(s*a);
cout<<"cost of fertilizer per pound:$" <<cf <<endl;
csq=c/a;
cout<<"cost of fertilizerper square foot: $"<<csq;
}