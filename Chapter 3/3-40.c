#include <stdio.h>

int main( void )
{
	int counter1 = 8, counter2 = 8;
	
	while ( counter1 != 0 )
	{
		if ( counter1 % 2 != 0 )
		{
			printf(" ");
		}
		
		while ( counter2 != 0 )
		{
			printf("*");
			printf(" ");
			counter2--;
		}
		
		printf("\n");
		
		counter2 = 8;
		counter1--;
	}
		
 	return 0; 
}
