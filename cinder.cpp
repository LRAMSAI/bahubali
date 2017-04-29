#include<iostream>
using namespace std;
class base1
{
int x;
public:
base1(int i)
{
x=i;
}
void show_x()
{
cout<<"x="<<x;
}
};
class base2
{
int y;
public:
base2(int j)
{
y=j;
}
void show_y()
{
cout<<"y="<<y;
}
};
class der:public base2,public base1
{
int m,n;
public:
der(int a,int b,int c,int d):
base1(a),
base2(b)
{
m=c;
n=d;
cout<<"derconstructor intialised ";

}
void show_mn()
{
cout<<"m="<<m<<"n="<<n;
}
};
int main()
{
der d(10,20,30,40);
d.show_x();
d.show_y();
d.show_mn();
return 0;
}
