#include <stdio.h>
#include <string.h>
void main ()
{
	char s1[100],s2[100],s3[100];
	int i,n;
	printf("Enter the string : ");
	gets(s1);
	
	printf("\nEntered string : %s",s1);
	
	printf("\nEnter the character : ");
	gets(s2);
    
    printf("\nEnter the operation : \n1.Replace \n2.Delete\n");
	scanf("%d",&n);
	
	switch (n)
	{
	/*case 1:
	printf("Enter the character to replace it with selected character : ");
	gets(s3);
	for(i=0;s1[i]!='\0';i++)
	   if(strcmp(s2,s1)==1)
	   s1[i]=s3;
	   else
	   continue;
	break;	*/
	case 2:	
	for(i=0;s1[i]!='\0';i++)
{
	   if(strcmp(s1,s2)==1)
	   s1[i]=' ';
}
	printf("Changed string : %s",s1);
	break;
    }
}
