#include<stdio.h>
void main()
{
char st1[40],st2[40];
int i=0;
printf("enter string 1:");
scanf("%s",st1);
while(st1[i]!='\0')
{
st2[i]=st1[i];
i++;
}
printf("the copied string is: %s",st2);
}
