#include<stdio.h>
main()
{
	int n,lb,ub,s;
	printf("\nEnter lb=");
	scanf("%d",&lb);
	printf("\nEnter ub=");
	scanf("%d",&ub);
	s=0;
	n=lb;
	while(n<=ub)
	{
		s=s+n;
		n=n+1;
	}
	printf("%d",s);
}
