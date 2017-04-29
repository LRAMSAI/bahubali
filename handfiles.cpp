
using namespace std;
int m#include<iostream>|ain()
{
char name[20],gender;
int age;
cout<<"enter the name:";
cin>>name;
cout<<"enter the gender:";
cin>>gender;
cout<<"enter the age:";
cin>>age;
ofstream fout("data.txt");
fout<<name<<endl;
fout<<gender<<endl;
fout<<age<<endl;
ifstream fin("data.txt");
fin>>name;
fin>>gender;
fin>>age;
cout<<"data in file"<<endl;
cout<<name<<"["<<gender<<"-"<<age<<"]"<<endl;
return 0;
}

