#include<stdio.h>
main()
{
	int marks;
	printf("enter marks");
	scanf("%d",marks);
	if(marks>=90||marks<=100)
	{
		printf("grade is A %d");
	}
	if(marks>=80||marks<90)
	{
		printf("grade is B %d");
	}
}
