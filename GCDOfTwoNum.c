#include <stdio.h>
int gcd();
int main()
{
    int num1,num2,result;
    printf("Enter two numbers \n");
    scanf("%d %d",&num1,&num2);
    result= gcd(num1,num2);
    printf("The gcd of the two numbers is %d",result);
    return 0;
}
int gcd(int a,int b)
{
    int hcf,i;
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    return hcf;
}
