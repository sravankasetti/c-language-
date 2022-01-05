#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the values");
	scanf("%d%d%d",&a,&b,&c);
	switch(a,b,c)
	{
		case 'a':
		 a>b&&a>c;
		 printf("a is the maximum");
		 break;
		 case 'b':
		  b>a&&b>c;
		  printf("b is the  maximum");
		  break;
		  default:
		  	printf("it is not the correct answer");
	}
}
