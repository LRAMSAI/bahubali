#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int no=98;
cout<<setw(5)<<setfill('$')<<no<<endl;
//cout<<setw(5)<<no<<endl;
cout<<setw(5)<<no+10<<endl;
cout<<setw(5)<<no+100<<endl;
cout<<setw(5)<<no+1000<<endl;
}


