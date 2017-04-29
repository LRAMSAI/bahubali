/*program to illustrate command line arguments*/
#include<iostream>
using namespace std;
int main(int argc, char*argv[])
{
int i;
cout<<"Total no. of arguments : "<<argc<<endl;
for(i=0;i<argc;i++)
cout<<"argv["<<i<<"]"<<argv[i]<<endl;
return 0;
}

