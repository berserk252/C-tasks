#include<stdio.h>

int main( void )
{
	int counter = 0;
	
	for ( counter = 1; counter <= 7; counter++ )
		printf("%d, ", counter);
	printf("\n");
	
	for ( counter = 3; counter <= 23; counter += 5 )
		printf("%d, ", counter);
	printf("\n");
	
	for ( counter = 20 ; counter >= -10; counter -= 6 )
		printf("%d, ", counter);
	printf("\n");
	
	for ( counter = 19 ; counter <= 51; counter += 8 )
		printf("%d, ", counter);
	printf("\n");
	
	return 0;
}
