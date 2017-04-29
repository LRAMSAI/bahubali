#include<iostream>
using namespace std;
int main()
{
try
{
throw 20;
}
catch(int e)
{
cout<<"an exception occured:"<<e<<"\n";
}
return 0;
}

