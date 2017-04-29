#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char name[20],branch[4];
int i,n,age;
cout<<"enter n value:";
cin>>n;
ofstream fout("itc.txt");
for(i=0;i<n;i++)
{
cout<<"enter the name";
cin>>name;
cout<<"enter the branch:";
cin>>branch;
cout<<"enter the age:";
cin>>age;
fout<<name<<endl;
fout<<branch<<endl;
fout<<age<<endl;
}
ifstream fin("itc.txt");
for(i=0;i<n;i++)
{
fin>>name>>branch>>age;
cout<<name<<"-"<<branch<<"-"<<age<<endl;
}
return 0;
}

