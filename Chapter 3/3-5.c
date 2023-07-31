#include<stdio.h>

int main( void )
{
	int sum, x;
	
	sum = 0;
	x = 1;
	
	while (x <= 10 )
	{
		sum += x;
		++x;
		
	}
	
	printf ("sum is : %d\n", sum);
	
	
	return 0;
}
