//EVEN OR ODD USING IF-ELSE STATEMENT

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("The number is even \n",x);
    }
    else
    {
        printf("The number is odd \n",x);
        
    }
    return 0;
}
