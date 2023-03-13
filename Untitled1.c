#include <stdio.h>
int main ()
{
	int i,j,n[3][3],m,p,q[3][3];
	printf("Enter the first matrix = ");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		scanf("%d",&n[i][j]);
	}
	for(m=0;m<3;m++)
	for(p=0;p<3;p++)
	{
		scanf("%d",&q[m][p]);
	}
	for(i=0,m=0;i<3,m<3;i++,m++)
	{
	for(j=0,p=0;j<3,p<3;j++,p++)
	{
		printf("%2d * %2d ",&n[i][j],&q[m][p]);
	}
    printf("\n");
    }
	return 0;
}
