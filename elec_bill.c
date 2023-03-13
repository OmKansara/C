#include <stdio.h>
void main ()
{
    int id,u;
    char c[30];
    float b,t,s;

    printf("Enter the customer ID - ");
    scanf("%d",&id);

    printf("Enter the name of customer - ");
    scanf("%s",&c);

    printf("Enter the units comsumed - ");
    scanf("%d",&u);

    printf("\nCUSTOMER ID - %d",id);
    printf("\nCUSTOMER NAME - %s",c);
    printf("\nUNITS CONSUMED - %d",u);
    
    if(u>600)
    {
        b=u*2;
        printf("\nAmount Charges @Rs. 2.00 per unit : %.2f",b);
    }
    else if(u>400)
    {
        b=u*1.80;
        printf("\nAmount Charges @Rs. 1.80 per unit : %.2f",b);
    }
    else if(u>200)
    {
        b=u*1.50;
        printf("\nAmount Charges @Rs. 1.50 per unit : %.2f",b);
    }
    else 
    {
        b=u*1.20;
        printf("\nAmount Charges @Rs. 1.20 per unit : %.2f",b);
    }
    if(b>400)
    {
        s=15*b/100;
        printf("\nSurcharge amount = %.2f",s);
    }
    printf("\nThe total amount of the bill = %.2f",b+s);
}