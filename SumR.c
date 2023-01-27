#include<stdio.h>
int fact(int);
void main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
int x =fact(n);
printf("%d is the sum of squares of numbers  till  %d terms",x,n);
}
int fact(int n)
{
if(n==0)
return 0;
else
return (n*n+fact(n-1));
}