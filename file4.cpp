#include<iostream>
#include<fstream>
using namespace std;
class student
{
char name[10],city[10];
int drno,age;
public:
void get();
void display();
};
void student::get()
{
cout<<"enter name:"<<endl;
cin>>name;
cout<<"enter age:"<<endl;
cin>>age;
cout<<"enter drno:"<<endl;
cin>>drno;
cout<<"enter city:"<<endl;
cin>>city;
}
void student::display()
{
cout<<name<<"-"<<city<<"-"<<drno<<"-"<<age<<endl;
}
int main()
{
student t;
fstream f;
f.open("address.txt",ios::in|ios::out);
char ch='y';
while(ch='y')
{
t.get();
f.write((char*)&t,sizeof(t));
cout<<"do you want to continue?(y/n):";
cin>>ch;
}
while(f)
{
f.read((char*)&t,sizeof(t));
t.display();
}
f.close();
return 0;
}
