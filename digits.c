#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++c;
}
printf("number of digits=%d",c);
getch();
}
