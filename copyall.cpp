#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
char ch;
ifstream f1("in.txt");
if(!f1)
cout<<"file not existed"<<endl;
ofstream f2("output.txt");
while(f1.get(ch))
f2.put(ch);
f1.close();
f2.close();
}

