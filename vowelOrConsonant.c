#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    switch (ch)
{
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("The entered character is a vowel \n");
    break;
    default: 
        if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
        printf("The entered character is a consonant \n");
        else 
        printf("The entered character is not an alphabet \n");
}
    return 0;
}
        

