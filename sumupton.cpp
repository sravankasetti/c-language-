#include<stdio.h>
main()
{
	int i,n,s;
	i=0;
	s=0;
	printf("\nEnter n=");
	scanf("%d",&n);
	while(i<=n)
	{
	s=s+i;
	i++;
}
printf("\nSum=%d",s);
}
