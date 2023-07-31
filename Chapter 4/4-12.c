#include<stdio.h>

int main( void )
{
	int counter;
	int sum;
	
	for ( counter = 2; counter <= 30 ; counter += 2 )
	{
		sum += counter;
		printf("%d\n", sum);
	}
		
	return 0;
}
