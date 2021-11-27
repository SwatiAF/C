//SUM OF THE SERIES: 1/2+2/3+3/4+...

#include <stdio.h>
float sumSeries();
void main()
{
    double sum=0, result, i, n;
    printf("Enter the value of n: ");
    scanf("%lf", &n);
    result= sumSeries(n);
}
float sumSeries(double n)
{
    double i, sum=0;
    for (i=1; i<=n; i++)
    {
        sum=sum + i/(i + 1);
    }
    printf("\n The sum of the given series is %.2lf", sum);
}
 
