#include<stdio.h>
main()
{
	int lb,ub,e,o,i;
	printf("\nEnter range=");
	scanf("%d%d",&lb,&ub);
	i=lb;
	e=0;
	o=0;
	while(i<=ub)
	{
		if(i%2==0)
			e=e+1;
		else
		o=o+1;
		
		i=i+1;
	}
	
	printf("\nNo. of even nos=%d",e);
    printf("\nNo. of odd nos=%d",o);
}
