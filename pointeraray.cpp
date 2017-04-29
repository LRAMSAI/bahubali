#include<iostream>
#include<string.h>
using namespace std;
/*int main()
{
int i=0;
char *p[3]={"books","tv","computer"};
for(i=0;i<3;i++)
{
cout<<p[i];
cout<<"\n";
}
cout<<"\n";
return 0;
}*/
int main()
{
int a[3]={10,20,30};
int *ptr[3];    
for(int i=0;i<3;i++)
{
ptr[i]=&a[i];
}
for(int i=0;i<3;i++)
{
cout<<"value of var["<<i<<"]=";
cout<<*ptr[i]<<endl;
}
return 0;
}

