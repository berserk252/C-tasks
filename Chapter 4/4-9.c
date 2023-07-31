#include<stdio.h>

int main( void )
{
	unsigned int counter = 1;
	int integer1 = 0;
	int integer2 = 0;
	
	printf("Enter counter : ");
	scanf("%d", &counter );
		
	for ( ; counter != 0 ; counter-- )
	{
		printf("Enter integer : ");
		scanf("%d", &integer1 );
		
		integer2 += integer1;
		printf("%d\n", integer2);
	}
	
	
	return 0;
}
