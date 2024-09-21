#include<iostream>
using namespace std;
main()
{
int min,sec,frames;
cout<<"enter the no. of minutes:"<<endl;
cin>>min;
cout<<"enter the no. of number of frames/sec:"<<endl;
cin>>sec;
min=min*60;
frames=min*sec;
cout<<"the total no. of frames are "<<frames <<endl;
}

