//program on user defined manipulator
#include<iostream>
using namespace std;
ostream & stand(ostream & d)
{
d.width(7);
d.setf(ios::showpos);
d.setf(ios::fixed);
d.precision(3);
return d;
}
int main()
{
float m1=123.45678,m2=316.126520098;
cout<<"m1="<<m1<<endl;
cout<<"m2="<<m2<<endl;
cout<<"m1="<<stand<<m1<<endl;
cout<<"m2="<<stand<<m2<<endl;
}
