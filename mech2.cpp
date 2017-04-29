 #include<iostream>
using namespace std;
class class-2;
class class-1;
{
int value 1;
public:
void indata (int a)
{
value 1=a;
}
void display(void)
{
cout<<value 1;
}
friend void exchange(class-1 & class-2 &);
};
class class-2
{
int value 2;
public:
void indata(int a)
{
value 2=a;
}
void display(void)
{
cout-1&,class-2&);
};
friend void exchange (class-1 &,class-2&);
};
void exchange(class-1&X,class-2&Y)
{
int temp=X.value;
X value=Y.value 2;
Y.value 2=temp;
}
int main()
{
class-1 c1;
class-2 c2;
c1.indata(100);
c2.indata(200);
cout<<'values before exchange"<<"\n";
c1.display();
c2.display();
exchange(c1,c2);
c1.display();
c2.display();
return 0;
}


