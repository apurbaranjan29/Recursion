#include<stdio.h>
int fact(int);
void main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
int x =fact(n);
printf("%d is the factorial of %d",x,n);
}
int fact(int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}