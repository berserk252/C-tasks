#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main( void )
{
	char s[100];
	int num = 0;
	int sum = 0;
	
	for(int a = 1; a <= 4; a++)
	{
		printf("Enter numbers: ");
		gets(s);
		
		num = atoi(s);
		sum += num;
	}
	
	printf("\nSum is %d ", sum);
	
	return 0;
}

