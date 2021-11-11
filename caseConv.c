//UPPER TO LOWER (VICE-VERSA) CASE CONVERSION USING IF-ELSE STATEMENT 

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter any character \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("The entered character was in upper case. In lower case it is '%c'", (ch+32));
    else
    printf("The entered character was in lower case. In upper case it is '%c'", (ch-32));
    return 0;
    
}
