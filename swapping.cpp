#include<stdio.h>
main()
{
	int a,b;
	printf ("enter values of 2 numbers");
	scanf("%d %d,&a,&b");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d" ,a,b);
}
