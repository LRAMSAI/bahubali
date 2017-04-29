#include<iostream>
using namespace std;
class sample
{
int x,y;
public:
void read()
{
cout<<"enter x and y values:"<<endl;
cin>>x>>y;
}
void display()
{
cout<<"in member function"<<endl;
cout<<"x="<<x<<endl<<"y="<<y<<endl;
}
friend  void putdata(sample s);
};
void putdata (sample s)
{
cout<<"in friend function:"<<endl;
int sample::*p=&sample::x;
int sample::*q=&sample::y;
cout<<"x="<<s.*p<<endl<<"y="<<s.*q<<endl;
}
int main()
{
sample a;
a.read();
a.display();
putdata(a);
}

