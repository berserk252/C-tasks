#include<stdio.h>

int main( void )
{
	int counter, number;
	
	printf("Enter number (1 or 2)\n");
	scanf("%d", &number);
	
	while ( counter != -1)
	{
		if ( number == 1)
		{
			counter = -1;
		}
		if ( number == 2 )
		{
			counter = -1;
		}	
		
		printf("Enter number (1 or 2)\n");
		scanf("%d", &number);
		
	}
	
	return 0;
}
