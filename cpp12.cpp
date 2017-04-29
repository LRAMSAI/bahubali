#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
ifstream fin;
fin.open("story1.txt");
char str[80];
int count=0;
while(!fin.eof())
{
fin.getline(str,80);
if(str[0]!='A')
count++;
}
cout<<"number of lines not starting with A are:"<<count;
fin.close();
}

