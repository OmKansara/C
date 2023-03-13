#include <stdio.h>

int main()
{
    int i, n, sum=0,a=1;

    /* Input range to find sum of odd numbers */
    printf("Enter upper limit: ");
    scanf("%d", &a);

    /* Find the sum of all odd number */
    for(i=1; i<=a; i+=2)
    {
        sum += i;
        a++;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}
