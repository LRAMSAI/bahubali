#include<iostream>
using namespace std;
class good
{
int s1,s2,s3,s4,s5;
float per;
char name[50],branch[10],sec[20];
public:
void getout(void);
void display(void);
};
void good::getout(void)
{
cout<<"enter the details";
cin>>name>>branch>>sec>>s1>>s2>>s3>>s4>>s5;
per=(s1+s2+s3+s4+s5)/5;
}
void good::display(void)
{
cout<<"name="<<name;
cout<<"branch="<<branch;
cout<<"sec="<<sec;
if(per<=100&&per>=90)
cout<<"a grade";
if (per<=89&&per>=80)
cout<<"b grade";
}
int main()
{
good g;
g.getout();
g.display();
return 0;
}

