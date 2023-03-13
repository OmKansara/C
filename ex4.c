#include <stdio.h>
void main ()
{
    int lar,n,i,a;
    
    printf("Enter the number of element to check = ");
    scanf("%d",&n);
    printf("Element 1 = ");
    scanf("%d",&lar);

    for(i=2;i<=n;i++)
    {
        printf("Element %d = ",i);
        scanf("%d",&a);
        if(lar<a)
        {
              lar=a;  
        }
    }
    printf("The largest number = %d",lar);
}