#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
ofstream myfile;
myfile.open("note.txt");
for(int i=0;i<=100;i++)
{
myfile<<i<<"\n ";
}
myfile.close();
system("pause");
}
