#include<iostream>
using namespace std;
class asha
{
int age;
int rno;
public: 
 void getdata()
{
cout<<"enter age:"<<endl;
cin>>age;
cout<<"enter rno:";
cin>>rno;
}
void display()
{
cout<<"age:"<<endl;
cout<<"rno:"<<endl;
}
};
class student:public asha
{
char name[20];
char branch[20];
public:
void getdata()
{
asha::getdata();
cout<<"name:"<<endl;
cin>>name;
cout<<"branch"<<endl;
cin>>branch;
}
void display()
{
cout<<"name is:"<<name;
cout<<"branch is:"<<branch;
}
};
class boy:public asha
{
char character[20];
int stamina;
public:
void getdata()
{
asha::getdata();
cout<<"character:"<<endl;
cin>>character;
cout<<"stamina"<<endl;
cin>>stamina;
}
void display()
{
cout<<"charcter is:"<<character;
cout<<"stamina is:"<<stamina;
}
};
int main()
{
student s;
boy b;
cout<<"reading student details:"<<endl;
s.getdata();
cout<<"displaying student details:"<<endl;
s.display();
cout<<"reading boy details:"<<endl;
b.getdata();
cout<<"displaying boy details:"<<endl;
b.display();
}


