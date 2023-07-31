#include<stdio.h>
#define SIZE 10

int main( void )
{
	float fractions[SIZE] = {0};
	
	fractions[9] = 1.667;
	fractions[7] = 3.333;
	
	for ( int x = 0; x <= SIZE - 1; x++ )
	printf("Fractoins [%d] = %f\n", x, fractions [x] );
			
			

	return 0;
}
