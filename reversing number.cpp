#include<stdio.h>
main()
{
	int i=1,n,r=0,d;
	scanf("%d",&n);
	do
{
	d=n%10;
	r=r*10+d;
	n=n/10;
}while(n>0);
printf("%d",r);}

