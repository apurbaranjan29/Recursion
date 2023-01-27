#include<stdio.h>
void factorial(int);
void table(int);
void main()
{
int n;
printf("enter the size of your array:");
scanf("%d",&n);
int a[n];
int i,j;
printf("enter your entries:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
factorial(a[i]);
table(a[i]);
}
}
void factorial(int x)
{
int c=1;
for(int i=1;i<=x;i++)
{
 c=c*i;
}
printf("%d is the factorial of %d \n",c,x);
}
void table(int x)
{
printf("Table of %d\n",x);
for(int i=1;i<=10;i++)
{
printf("%d\n",x*i);
}
}
