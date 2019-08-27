#include<stdio.h>
#include<stdlib.h>
int fib(int);
int main()
{
int n;
int i=0;
int c;
scanf("%d",&n);
printf("fibonacci series terms are:\n");
for (c=1;c<=n;c++)
{
printf("%d\n",fib(i));
i++;
}
return 0;
}
int fib(int n)
{
if (n==0 || n==1)
return n;
else
return(fib(n-1)+fib(n-2));
}

