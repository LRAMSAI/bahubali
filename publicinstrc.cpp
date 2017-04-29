#include<iostream>
using namespace std;
class a
{
public:
int x;
};
class b: public a
{
public:
int y;
void read()
{
cout<<"enter value of x";
cin>>y;
}
void show()
{
cout<<"x="<<x;
cout<<"y="<<y;
}
};
int main()
{
b ob;
ob.read();
}
