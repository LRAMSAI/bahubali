#include<iostream>
using namespace std;
void test (int x)
{
try {
if(x==1) throw x;
else
if(x==-1)throw 1.0;
else
if(x==o) throw 'x';
}
catch (int m)
{
cout<<"caught an integer!"<<endl;
}
catch (char c)
{
cout<<"caught an character!"<<endl;
}
catch (double f)
{
cout<<"caught a floating value"<<endl;

