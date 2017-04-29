#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
string str;
ifstream f1("input1.txt");
if(!f1)
{
cout<<"File not found"<<endl;
}
ofstream f2("out.txt");
while(getline(f1,str))
{
f2<<str<<endl;
}
f1.close();
f2.close();
}

