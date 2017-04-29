#include<iostream>
using namespace std;
class arthimetic
{
private:
int a,b,add,sub,mul;
float div;
public:
void getdata(void);
void display(void);
};
void arthimetic::getdata(void)
{
cout<<"enter the 2 no.";
cin>>a>>b;
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
}
void arthimetic::display(void)
{
cout<<"add="<<add;
cout<<"sub="<<sub;
cout<<"mul="<<mul;
cout<<"div="<<div;
}
int main()
{
arthimetic k;
k.getdata();
k.display();
return 0;
}


