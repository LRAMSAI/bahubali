#include<iostream>
using namespace std;
class employee
{
char name[30];
float age;
public:
void getdata (void);
void putdata (void);
};
void employee::getdata(void)
{
cout<<"enter name";
cin>>name;
cout<<"enter age";
cin>>age;
}
void employee::putdata(void)
{
cout<<"name="<<name;
cout<<"age="<<age;
}
const int size=3;
int main()
{
employee manager[size];
for(int i=0;i<size;i++);
{
cout<<"details of manager are";
manager[i].getdata();
}
cout<<"\n";
for(i=0;i<size;i++)
{
cout<<"manager"
;manager[i].putdata();
}
return 0;
}

