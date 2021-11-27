#include <stdio.h>

void main() {
    int num1,num2,num3;
    printf("Enter the values of num1, num2 and num3 \n");
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("num1=%d \t num2=%d \t num3=%d \t \n",num1,num2,num3);
    
    if(num1<num2)
       if(num1<num3)
          printf("num1 is the smallest among three \n");
        
        else if(num2<num3)
          printf("num1 is the smallest among three \n");
          
        else
          printf("num2 is the smallest among three \n");
}
        
