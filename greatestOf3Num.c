//GREATEST OF THREE NUMBERS USING IF-ELSE

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the values of num1, num2 and num3 \n");
    scanf("%d %d %d", &num1,&num2,&num3);
    printf("num1=%d \t num2=%d \t num3=%d \n", num1,num2,num3);
    if(num1>num2)  {
        if (num1>num3)  {
            printf("num1 is greatest among three \n");  }
        else  {
            printf("num3 is greatest among three \n");  }
    }
    else if(num2>num3)  {
        printf("num2 is greatest among three \n");  }
    else  {
        printf("num3 is greatest among three \n");  }
    return 0;
}
