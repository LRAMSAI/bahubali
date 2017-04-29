#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
fout.open("srikar.txt");
for(int i=1;i<=100;i++)
fout<<i<<"\n";
fout.close();
return 0;
}


