#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\nEnter the angles=");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	    if(d>180)
	    printf("It is not a triangle\n");
	    else if(d<180)
	    printf("It is not a triangle\n");
		else if(a==b==c)
		printf("It is an equilateral triangle");
		else if(a==b!=c)
		printf("It is an isosceles triangle");
		else
	    printf("It is an scalene triangle");
}
