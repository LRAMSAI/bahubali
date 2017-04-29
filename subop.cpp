#include<iostream>
using namespace std;
class sample
{
private:
int a[10];
public:
sample()
{
for(int i=0;i<10;i++)
{
a[i]=i;
}
}
int &operator[](int i)
{
if(i>10)
cout<<"index out of bounds"<<endl;
return a[0];
}
return a[i];
};
int main()
{
sample A;
cout<<"value of A[2]:"<<A[2]<<endl;
cout<<"value of A[5]:"<<A[5]<<endl;
cout<<"value of A[12]:"<<A[12]<<endl;
}

