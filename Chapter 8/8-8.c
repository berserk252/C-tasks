#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	char s[100];
	double num = 0;
	double sum = 0;
	
	for(int a = 1; a <= 4; a++)
	{
		printf("Enter number: ");
		gets(s);
		
		num = atof(s);
		num *= 2;
		sum += num;
		
	}
	
	printf("\nSum is %.2f", sum);
	
	return 0;
}

