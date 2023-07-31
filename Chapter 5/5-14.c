#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	int counter = 1;
	
	for( ; counter <= 50 ; counter++)
	{
		printf("%d ",  (1 + (rand ( ) % 5)) * 2 );
		puts(" ");
		
	}
	
	printf("***********\n");
	
	for( counter = 1; counter <= 50 ; counter++)
	{
		printf("%d ",  1 + (rand ( ) % 6) * 2 );
		puts(" ");
	}
	
	printf("***********\n");
	
	for( counter = 1; counter <= 50 ; counter++)
	{
		printf("%d ",  (3 + (rand ( ) % 5) * 2) * 2 );
		puts(" ");
	}		
	return 0;
}
