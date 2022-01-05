#include<stdio.h>
main()
{
	int a,b;
	char c;
	printf("enter a,b values");
	scanf("%d%d%%c",&a,&b,&c);
	switch(c)
	{
	case'+':
    printf("sum of two numbers is %d",a+b);
    break;
    case'-':
    printf("difference between two numbers %d",a-b);
    break;
    case '*':
    printf("multiplication between two numbers %d",a*b);
    break;
    case'/':
    printf("division of two numbers %d",a/b);
    break;
}
}
