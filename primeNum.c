#include <stdio.h>
#include <conio.h>
int prime();
void main()  {
	int num,result=0;
	printf("\nEnter a Number: ");
	scanf("%d",&num);
	result=prime(num);
	if(result==0)
		printf("\n%d is a prime number",num);
	else
		printf("\n%d is not a prime number",num);  }
int prime(int n)  {
	int i;
	for(i=2; i<=n/2; i++)  {
		if(n%i!=0)
			continue;
		else
			return 1;  }
	return 0;
}

