#include <stdio.h>
int even();
int main () 
{
    int i,m,n,even_no;
    printf("Enter the range of numbers from m to n \n");
    scanf("%d %d",&m,&n);
    even_no= even(m,n);
    return  0;
}
int even(int  m,int n,int i)
{
    i=m;
    while(i<=n)
    {
        if(i%2==0)
        { 
            printf("%d \t",i);
        }
        i++;
    }
    return i;
}

