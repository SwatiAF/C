//Copy one string to another and finding its length


#include <stdio.h>
int main()
{
	char s1[10], s2[10], i=0, j=0;
	int length;
	printf("Enter String1: ");
	scanf("%s", &s1[i]);
	printf("Enter String2: ");
	scanf("%s", &s2[j]);

	while(s1[i] != '\0')
	i++;
	while(s2[j] != '\0')  {
	    s1[i] = s2[j];
	    i++;
	    j++;
	}
	s1[i] = '\0';
	printf("After Copying strings, string1 is: ");
	puts(s1);
	
	while(s1[i] != '\0')
	i++;
	length= i;
	printf("\nThe Length of the string is:%d", length);
return 0;
}


