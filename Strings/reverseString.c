//Reverse a String


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()  {
    char s[10], temp;
    int i, j=0, length;
    printf("Enter the String: ");
    scanf("%s",&s[i]);
    i=0;
    j= strlen(s)-1;
    
    while(i < j)  {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("Reverse of the string is: %s", s);
    return 0;
}


