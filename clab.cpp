#include<iostream>
using namespace std
int main()
{
nt a,b;
cout<<"enter values of a and b\n";
cin>>a;
int x=a-b;
try
{
if(x!=0)
{
cout<<"result(a/x)="<<a/x<<"\n";
}
else
throw(x);
}
}
catch(int i)
{
cout<<"exception caught:x="<<x<<n\n";
}
cout<<"end";
return 0;
}


