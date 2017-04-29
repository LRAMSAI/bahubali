#include<iostream>
class copy
{
              int var,fact;
              public:
 
                copy(int temp)
                {
                 var = temp;
                }
 
                double calculate()
                {
                            fact=1;
                            for(int i=1;i<=var;i++)
                            {
                            fact = fact * i;
                            }
                            return fact;                           
                }
};
void main()
{
    int n;
    cout<<"\n\tEnter the Number : ";
    cin>>n;
    copy obj(n);
    copy cpy=obj;
    cout<<"\n\t"<<n<<" Factorial is:"<<obj.calculate();
    cout<<"\n\t"<<n<<" Factorial is:"<<cpy.calculate();
   }
