#include<iostream>
using namespace std;
ostream & manip1(ostream &obj)
{
cout.width(1);
cout.setf(ios::showpos);
return obj;
}
int main()
{
int m=-18;
char ch='m';
cout<<"m="<<m<<endl;
cout<<"ch="<<ch<<endl;
cout<<"m="<<manip1<<m<<endl;
cout<<"ch="<<manip1<<ch<<endl;
}
