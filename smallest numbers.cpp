#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the values a,b,c");
	scanf ("%d %d %d",&a,&b,&c);
	if (a<b&&a<c)
	{
		printf("a is  smallest number");
	}
    else if(b<c&&b<a)
    {
    printf("b is the smallest number");
    }
    else
    {
    	printf("c is smallest number");
    }
}
