#include<iostream>
using namespace std;
 main()
{
int a,b,c;
float d;
cout<<"enter a value";
cin>>a;
cout<<"enter b value";
cin>>b;
cout<<"enter c value";
cin>>c;
try
{
if((a-b)!=0)
{
d=c/(a-b);
cout<<"d="<<d<<endl;
}
else
{
throw(a-b);
}
}
catch(int i)
{
cout<<"division by zero is intial"<<i;
}
}

