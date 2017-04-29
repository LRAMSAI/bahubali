#include<iostream>
using namespace std;
int main()
{
int a,*p1,**p2;
p1=&a;
p2=&p1;
cout<<"adress of a:"<<p1<<endl;
cout<<"adress of p1:"<<p2<<endl;
cout<<"after increment the adress values:\n\n";
p1+=2;
cout<<"the adress of a:"<<p1<<endl;
p2+=2;
cout<<"the adress of p1:"<<p2<<endl;
return 0;
}

