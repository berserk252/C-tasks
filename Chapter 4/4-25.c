#include<stdio.h>

int main( void )
{
	int counter;
	
	for ( counter =  0 ; counter <= 9 ; counter++ )
	{		
		printf("%2u ", counter);
	}
	printf("\n");
	
	for ( counter = 0 ; counter <= 1 ; counter++ )
	{		
		printf("%2u ", counter);
	}
	
	printf("\n");
	
	for ( counter = 0 ; counter <= 8 ; counter++ )
	{		
		printf("%2u ", counter);
	}
	
	printf("\n");
	
	for ( counter = 0 ; counter <= 10 ; counter++ )
	{		
		if ( counter > 9 )
		{
			printf("A B C D F");
		}
		else
		{
			printf("%2u ", counter);
		}
	}
	
	return 0;
}
