//Sum of squares of 1st odd numbers using While Loop

#include <stdio.h>
int sq_sum();
int main ()
{
    int i,n,sum=0,squareSum;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    squareSum= sq_sum(n);
    return 0;
}
int sq_sum(int n,int i)
{
    int sum=0;
    for(i=1; i<=n; i+=2)
    {
        sum= sum + (i*i);
    }
    printf("The sum of squares of odd numbers from 1 to %d is %d \n", n,sum);
    return 0;
}


