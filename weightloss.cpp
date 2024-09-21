#include<iostream>
using namespace std;
main()
{
string name;
float kg ,days,wl;
cout<<"Enter the name of patient:"<<endl;
cin>>name;

cout<<"Enter weightloss in kgs:" <<endl;
cin>>kg;

 wl=kg*15;
cout<<name <<" will need" <<wl <<"days to lose"<<kg <<" kg of weightby following the doctor's suggestion";  
}
