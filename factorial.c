#include<stdio.h>
#include<stdlib.h>
int fact (int n);
int main()
{
int f = fact(5);
printf("%d\n",f);
}
int fact(int n)
{
if(n==0)
return 1;
return (n*fact(n-1));
}
