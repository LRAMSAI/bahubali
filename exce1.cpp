#include<iostream>
using namespace std;
int main()
{
int x=-1;
cout<<"before try\n";
try{
cout<<"inside try\n";
if(x<0)
{
throw x;
cout<<"after throw(never expected)\n";
}
}
catch(int x)
{
cout<<"exception caught\n";
}
cout<<"After catch(will be executed)\n";
return 0;
}

