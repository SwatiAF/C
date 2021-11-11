//Average of three numbers

#include <stdio.h>

int main()
{
    int a,b,c;
    float avg;
    printf("Input the values of a,b,c \n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("The average of three numbers is %f \n",avg);

    return 0;
}
