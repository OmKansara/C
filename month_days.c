#include <stdio.h>
void main ()
{
    int mon;

    printf("Enter the month number : ");
    scanf("%d",&mon);

    if(mon>7)
    {
        if(mon%2==0)
        {
            printf("It has 31 days.");
        }
        else 
        {
            printf("It has 30 days.");
        }
    }
    if(mon==2)
    {
        printf("It has 28 days but in leap year it has 29 days.");
    }
    if(mon<=7)
    {
        if(mon%2==0)
        {
            printf("It has 30 days.");
        }
        else
        {
            printf("It has 31 days");
        }
    }
}
