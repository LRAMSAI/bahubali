
#include<iostream>  
#include<cstdlib>
#include<iomanip>
using namespace std;
class matrix
{
    protected:
	int i,j,a[10][10],b[10][10],c[10][10];
	int m1,n1,m2,n2,m3,n3;
    public:
	virtual void read()=0;
	virtual void display()=0;
	virtual void sum()=0;
	virtual void sub()=0;
	virtual void mult()=0;
};
class result:public matrix
{
    public:
    void read();
    void sum();
    void sub();
    void mult();
    void display();
};
void result::read()
{
                cout<<"\nenter the order of matrix A ";
	    cin>>m1>>n1;
	    cout<<"\nenter the elements of matrix A ";
	    for(i=0;i<m1;i++)
	    {
		for(j=0;j<n1;j++)
		{
		    cin>>a[i][j];
		}
	    }
	    cout<<"\nenter the order of matrix B ";
	    cin>>m2>>n2;
	    cout<<"\nenter the elements of matrix B ";
	    for(i=0;i<m2;i++)
	    {
		for(j=0;j<n2;j++)
		{
		    cin>>b[i][j];
		}
	    }
}
void result::display()
	{

	    for(i=0;i<m3;i++)
	    {
		for(j=0;j<n3;j++)
		{
		    cout.width(3);
		    cout<<c[i][j];
		}
		cout<<"\n";
	    }
	}
void result::sum()
{
    if((m1!=m2)||(n1!=n2))
    {
	cout<<"the order should be same for addition";
    }
    else
    {
	for(i=0;i<m1;i++)
	{
	    for(j=0;j<n1;j++)
	    {
		c[i][j]=a[i][j]+b[i][j];
	    }
	}
	m3=m1;
	n3=n1;
    }
}
void result::sub()
	{
	    if((m1!=m2)||(n1!=n2))
	    {
		cout<<"the order should be same for subtraction ";
	    }
	    else
	    {   m3=m1;
		n3=n1;
		for(i=0;i<m1;i++)
		{
		    for(j=0;j<n1;j++)
		    {
			c[i][j]=a[i][j]-b[i][j];
			//cout<<a[i][j];
		    }
		}
	    }
	}
void result::mult(void)
	{
	    if(n1!=m2)
	    {
		cout<<"Invalid order limit ";
	    }
	    else
	    {   m3=m1;
		n3=n2;
		for(i=0;i<m1;i++)
		{
		    for(j=0;j<n2;j++)
		    {
			for(int k=0;k<n1;k++)
			{
			    c[i][j]+=a[i][k]*b[k][j];
			}
		    }
		}
	    }
	}
int main()
{
    int ch;
    class matrix *p;
    class result r;
    p=&r;
    while(1)
    {
            cout<<"\n1. Addition of matrices ";
	cout<<"\n2. Subtraction of matrices ";
	cout<<"\n3. Multipication of matrices ";
	cout<<"\n4. Exit";
	cout<<"\nEnter your choice ";
	cin>>ch;
	switch(ch)
	{
	    case 1:
		p->read();
		p->sum();
		p->display();
		break;
	    
case 2:
		p->read();
		p->sub();
		p->display();
		break;
	
            case 3:
		p->read();
		p->mult();
		p->display();
		break;
	 case 4: exit(0);
	}
    }
}


