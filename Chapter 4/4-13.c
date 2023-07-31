#include<stdio.h>

int main( void )
{
	int counter, sum;
	
	
	for(counter = 1 ; counter <= 15 ; counter += 2)
	{
		sum *= counter;
		printf("%d\n", sum);
		
	}
	
	return 0;
}
