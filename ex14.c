#include <stdio.h>
void main ()
{
	int a,b,r;
	printf("Enter the rows = ");
	scanf("%d",&r);
	
	for(a=1;a<=r;a++)
	{
		for(b=a;b<=r;b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}
