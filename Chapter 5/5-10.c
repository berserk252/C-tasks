#include<stdio.h>
#include<math.h>

double floor ( double x);

int main( void )
{
	double num = 0, y;
	int counter = 1;
	
	for ( ; counter <= 5 ; counter++ )
	{
		printf("Enter number : ");
		scanf("%lf", &num);
		
		y = floor ( num + .5);
		printf("%.2f\n", y );
		
	}		
	return 0;
}

