#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of 2 numbers");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,b);
}
