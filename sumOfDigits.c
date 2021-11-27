//Sum of digits of a number


#include<stdio.h>
int digitSum();
int main()  {
    int num, sum=0, digits;
    printf("Enter the number to find the sum of its digits: ");
    scanf("%d", &num);
    digits= digitSum(num);
    return 0;
}
int digitSum(int num)  {
    int sum=0;
    while(num != 0)  {
        sum += num%10;
        num = num/10;
    }
    printf("Sum of Digits of the given number is %d", sum);
    return sum;
}
    

