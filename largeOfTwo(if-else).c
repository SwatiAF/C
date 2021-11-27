//GREATEST OF THE TWO NUMBERS WITHOUT FUNCTIONS

#include <stdio.h>

void main()
{
    int num1,num2;
    printf("Enter the values of num1 and num2 \n");
    scanf("%d %d",&num1,&num2);
    printf("num1=%d \t num2=%d \t \n",num1,num2);
    if (num1>num2) {
    printf("num1 is greatest of two \n");  
    }
    else {
        printf("num2 is greatest of two \n");
    }
}

