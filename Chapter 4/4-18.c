#include<stdio.h>

int main( void )
{
	int counter;
	
	printf("Enter counter (1 - 30) : ");
	scanf("%d", &counter);
	
	for (;  counter != 0 ; counter--)
	{
		printf("*");
	}
	return 0;
}
