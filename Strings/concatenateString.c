//Concatenation of two strings and finding the length of the resultant string


#include<stdio.h>
#include<conio.h>
int main()  {
    char s1[10], s2[10], s3[20];
    int i=0, j=0, length;
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    while(s1[i] != '\0')  {
        s3[j] = s1[i];
        i++;
        j++;  }
    i=0;
    while(s2[i] != '\0')  {
        s3[j] = s2[i];
        i++;
        j++;  }
    s3[j] = '\0';
    printf("\n The concatenated string is: ");
    puts(s3);
    getch();
    
    while(s3[j] != '\0')
    j++;
    length=j;
    printf("The length of the string is: %d", length);
    return 0;
}


