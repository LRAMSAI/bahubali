#include<iostream>
using namespace std;
class base1
{
int x;
public:
base1(int i)
{
x=i;
cout<<"base1 constructed"<<endl;
}
void show_x()
{
cout<<"x="<<x<<endl;
}
};
class base2
{
float p,q;
public:
base2(float a,float b):
p(a),q(b+p)
{
cout<<"base2 constructed"<<endl;
}
void show_pq()
{
cout<<"p="<<p<<endl;
cout<<"q="<<q<<endl;
}
};
class der
{
base1 b1;
base2 b2;
int u,v;
public:
der(int a,int b,float c):
b1(a*2),b2(c,c),u(a)
{
v=b;
cout<<"derived constructed"<<endl;
}
void show_der()
{
b1.show_x();
b2.show_pq();
cout<<"u="<<u<<endl;
cout<<"v="<<v<<endl;
}
};
int main()
{
der d(2,4,2.5);
cout<<"display member values"<<"\n";
d.show_der();
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
