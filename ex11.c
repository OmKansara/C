/* Write a program that stops asking number from users when -1 is pressed and show total 
numbers input by users. (Note: use while… OR do…while loop)  */
#include <stdio.h>
void main ()
{
	int i,sum=0;
	do
	{
		printf("Enter num = ");
		scanf("%d",&i);
			if(i==-1)
	{
		break;
	}
		sum+=i;
	
	}
	while(i!=-1);
	if(i==-1)
	{
		
	}
	printf("The sum = %d",sum);
}
