#include<stdio.h>

int main( void )
{
	int integer;
	
	printf("Enter integer: ");
	scanf("%d", &integer);
	printf("%d! = ", integer);
	
	while ( integer != 0 )
	{
		if ( integer == 1 )
		{
			printf("%d", integer);
		}
		else
		{
			printf("%d * ", integer);
		}
		integer--;
	}
	
	return 0;
}
