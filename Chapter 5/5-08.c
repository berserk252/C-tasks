#include<stdio.h>
#include<math.h>

double fabs (double );
double floor (double );
double ceil (double );

int main( void )
{
	double x;
	
	x = fabs (7.5);
	printf("%.2f\n", x );
	
	x = floor (7.5);
	printf("%.2f\n ", x );
	
	x = fabs (0.0);
	printf("%.2f\n", x );
	
	x = ceil (7.5);
	printf("%.2f\n ", x );
	
	x = fabs (-6.4);
	printf("%.2f\n", x );
	
	x = ceil (-6.4);
	printf("%.2f\n", x );
	
	x = ceil ( -fabs ( -8 + floor ( -5.5 ) ) );
	printf("%.2f\n", x );
		
	return 0;
}

