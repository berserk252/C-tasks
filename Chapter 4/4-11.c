#include<stdio.h>

int main( void )
{
	int counter;
	int integer = 0;
	int small = 0;
	
	printf("Enter counter :");
	scanf("%d", &counter);
	
	small = counter;
	
	
	
	for( ; counter != 0 ; counter-- )
	{
		printf("Enter integer :");
		scanf("%d", &integer);
		
		if ( integer < small)
			small = integer;
		else
			small = small;		
	}
	
	printf("Small is %d\n", small);
	return 0;
}
