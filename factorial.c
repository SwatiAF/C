//FACTORIAL

#include <stdio.h>
int fac();
int main()
{
    int num;
    long factorial;
    printf("Enter a number \n");
    scanf("%d",&num);
    factorial=fac(num);
    printf("The factorial of %d is %ld \n",num,factorial);
    return 0;
}
int fac(int n)
{
    long fact=1;
    int i;
    for(i=n;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}
