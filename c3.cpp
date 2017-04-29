#include<iostream>
using namespace std;
class item
{
private:
int number;
float cost;
public:
void getdata(int x,float y);
void putdata();
};
 inline void item::getdata(int x,float y)
{
number=x;
cost=y;
}
inline void item::putdata()
{
cout<<"number="<<number<<"cost="<<cost<<endl;
}
int main()
{
item a;
cout<<"object a:"<<endl;
a.getdata(100,299.5);
a.putdata();
}
