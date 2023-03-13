#include <stdio.h>
void main ()
{
    int temp;                                    
    
/*Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot*/

    printf("Enter the temperature - ");
    scanf("%d", &temp);

    if(temp>=40)
    {
        printf("The temperature is very hot.");
    }
    else if(temp>30)
    {
        printf("The temperature is hot.");
    }
    else if(temp>20)
    {
        printf("The temperature is normal.");
    }
    else if(temp>10)
    {
        printf("The temperature is cold.");
    }
    else
    {
        printf("The temperature is freezing.");
    }
}