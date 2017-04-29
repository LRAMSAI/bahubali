//program to display a message using manipulator
#include<iostream>
using namespace std;
ostream & n(ostream & n)
{
cout<<"Negative";
return n;
}
ostream & p(ostream & p)
{
cout<<"positive";
return p;
}
int main()    //main starts
{
int x;
cout<<"Enter a number";
cin>>x;           //gives value to x
if(x<0)
{
cout<<x<<"is"<<n;
}
else
{
cout<<x<<"is"<<p;
}
}
