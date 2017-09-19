#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&b);
scanf("%d",&c);
for(a=b;a<=c;a++)
{
if(a%1==0&&a%a==0)
{
printf("%d",a);
}
}
return0;
}
