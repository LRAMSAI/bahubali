#include<iostream>
using namespace std;
int main()
{
float num=9.12345678901;
cout.setf(ios::fixed);
cout<<num<<endl;
cout.setf(ios::scientific,ios::floatfield);
cout<<num<<endl;
cout.precision(10);
cout<<num<<endl;
}
