#include<iostream>
using name space std;
class base
{
public c:
virtual void show()
{
cout<<"base class "\n";
}
};
class derived:public base
{
public:
void show()
{
cout<<"derived class \n";
}
};
main()
{
base*b;
derived d;
b=&d;
b->show;
return 0;
}
