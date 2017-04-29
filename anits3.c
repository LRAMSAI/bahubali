#include<iostream>
using namespace std;
int m=10;
int main()
{
int m=20;
}
int k=m;
'int m=30;
cout<<"we are in minor block";
cout<<"k="<<k;
cout<<"m="<<m;
cout<<"::m="<<::m;
}
cout<<"we are in outer block";
cout<<"m=";
cout<<"::m="<<::m;
return 0;
}

