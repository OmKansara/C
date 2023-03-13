/* Write a program to calculate the sum of 10 numbers. If user inputs negative number then 
negative number skips from calculation. (Note: use of goto or continue statement) 
 */
#include <stdio.h>
void main ()
{
	int i,sum=0,n=1;
	for(n=1;n<=5;n++)
	{
	
		printf("Enter the number = ");
		scanf("%d",&i);
		if(i<0)
		{
			continue;
		}
		sum=sum+i;
	}
	printf("The sum = %d",sum);
}
