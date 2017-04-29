# include<iostream>
using namespace std;
class student
{
public:
char stname[20];
int stno[5];
void getdata()
{
cout<<"enter the student name ";
cin>>stname;
cout<<"enter student no."
cin>>stno;
}
};

class marks:public student
{
int math1,math2,physics;
public:
int total,org;
void getdata()
{
cout<<"enter math1 marks";
cin>>math1;
cout<<"enter math2 marks ";
cin>>math2;
cout<<"enter physics marks ";
cin>>physics;

total=math1+math2+physics;
avg=total/3;
cout<<"total marks:"<<total;
cout<<"avg marks:"<<avg;
}
};

void main()
{
int n;
marks s[10];
cout<"enter no.";
cin>>n;
for(i=0;i<n;i++)
{
s[i].getdata();
s[i].getdata();
}
}
