#include<iostream>
using namespace std;
class base
{
public:
int b;
void show()
{
cout<<"b="<<b;
};
class der:public base
{
public:
int d;
void show()
{
cout<<"b="<<b;
cout<<"d+"<<d;
};
int main()
{
base b1 *bptr;
bptr=&b;
bptr->100;
cout<<"bptr points to base object";
bptr->show();
der d;
bptr=&d;
bptr->b=200;
bptr->d=300;
cout<<"bptr points to derived object";
bptr->show();
der d;
bptr=4d;
bptr->b=200;
bptr=>d=300;
cout<<"bptr points to derived object;"
bptr->show()
der *dptr;
dptr->d=300;
cout<<"dptr points to derived object';
dptr->show();
cout<<"using ((der*)bptr)\n";
((der *)bptr)->d.400;
((der *)bptr)->show();
return 0;
}

