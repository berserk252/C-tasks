#include<stdio.h>

int main( void )
{
	int counter;
	int integer1 = 0;
	int integer2 = 0;
	
	printf("Enter counter : ");
	scanf("%d", &counter );
		
	for ( ; counter != 9999; integer2++)
	{
		integer1 += counter;
		
		printf("Enter counter : ");
		scanf("%d", &counter );
	}
	
	integer1 = integer1 / integer2;
	printf("%d\n", integer1);
	
	return 0;
}
