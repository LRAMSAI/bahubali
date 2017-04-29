
#include<iostream>
using namespace std;
class sample
{
int x,y;
public:
void read(int m,int n)
{
x=m;
y=n;
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
void (sample::*p1)(int,int)=&sample::read;
(a.*p1)(10,20);
void (sample::*q1)()=&sample::display;
(a.*q1)();
putdata(a);
}
