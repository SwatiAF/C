//Reversing the digits of the number.


#include <stdio.h>
int digitReverse();
int main()
{
    int num,reverse;
    printf("Enter the number whose digits are to be reversed: ");
    scanf("%d", &num);
    reverse = digitReverse(num);
    printf("The reverse of %d is %d \n",num,reverse);
    return 0;
}
int digitReverse(int num)
{
    int sum=0;
    while(num != 0)
    {
        sum = sum*10 + num%10;
        num/=10;
    }
    return sum;
}



