#include<stdio.h>
main()
{
	char ch;
	printf("enter a letter");
	scanf("%c",&ch);
	switch(ch)
{
	case 'A'...'Z':
		ch=ch+32;
		 printf("converted character is %C",ch);
		 break;
    case 'a'...'z':
    	ch=ch-32;
    	printf("converted character is %c",ch);
    	break;
    }
}
