#include<iostream>
using namespace std;
class shape
{
protected:
int width,height;
public:
shape(int a=0,int b=0)
{
width =a;
height =b;
}
virtual int area()
{
cout<<"\n parent class area"<<endl;
return 0;
}
};
class Rectangle:public shape
{
public:
Rectangle(int a=0,int b=0):shape (a,b){}
int area()
{
cout <<"\n rectangle class area:";
cout<<(width*height);
}
};
class triangle:public shape
{
public:
triangle(int a=0,int b=0):shape (a,b){}
int area()
{
cout <<"\n triangle class area:";
cout<<(width*height/2);
}
};
int main()
{
shape *shape;
Rectangle rec(10,7);
triangle tri(10,5);
shape =&rec;
shape->area();
shape=&tri;
shape->area();
cout<<"\n";
return 0;
}

