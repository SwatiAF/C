#include <stdio.h>
int even();
int main()
{
    int m,n,i,even_no;
    printf("Enter the range of numbers from m to n \n");
    scanf("%d %d",&m,&n);
    even_no= even(m,n);
    return 0;
}
int even(int m,int n,int i)
{
    if(m%2 !=0)
    {   m++;    }
    for(i=m; i<=n; i+=2)
    {
        printf("%d \t",i);
    }
    return 0;
}

