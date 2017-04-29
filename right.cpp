#include<iostream>
using namespace std;
int main()
{
int i=1;
cout.setf(ios::right,ios::adjustfield);
cout.width(5);
cout<<i<<endl;
cout.width(5);
cout<<(i+10)<<endl;
cout.width(5);
cout<<(i+12345)<<endl;
cout.width(5);
}
