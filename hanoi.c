#include<stdio.h>
#include<stdlib.h>
void tower_hanoi(int n,char src,char temp,char dest)
{
if(n==1)
{
printf("move disc 1 from rod %c to rod %c \n",src,temp);
return;
}
tower_hanoi(n-1,src,temp,dest);
printf("move disc %d from rod %c to rod %c \n",n,src,temp);
tower_hanoi(n-1,dest,temp,src);
}
int main()
{
int n=3;
tower_hanoi(n,'A','B','C');
return 0;
}



