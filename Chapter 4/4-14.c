#include<stdio.h>

int main( void )
{
	int counter, sum;
	
	printf("Enter counter : ");
	scanf("%d", &counter);
	
	printf("%d! = ", counter);
	
	for ( ; counter != 0 ; counter-- )
	{
		
		sum *= counter;
		if ( counter > 1 )
		{
			printf("%d * ", counter);
		}
		else
		{
			printf("%d\n", counter);
		}
	}
	
	printf("sum is %d", sum);
		

	return 0;
}
