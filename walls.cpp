#include<iostream>
using namespace std;
main()
{
int walls,paint,w,h;
cout<<"Number of square meters I can paint:";
cin>>paint;
cout<<"Width of single wall (in meters):";
cin>>w;
cout<<"Height of a single wall (in meters):";
cin>>h;
walls=paint/(w*h);
cout<<"Number of wals you can paint is"<<walls ;
}
