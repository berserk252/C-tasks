#include<stdio.h>

double hypotenuse (double b, double c );

int main( void )
{
	double num1, num2;
	int counter = 1; 
	
	
	for( ; counter <= 3 ; counter++)
	{
		printf("Enter sides : ");
		scanf("%lf%lf", &num1, &num2);
		
		printf("Hypotenuse is %.3f\n", hypotenuse ( num1, num2) );
	}
	
	
	return 0;
}

double hypotenuse (double b, double c )
{
	double a = 0;
	
	a = (b * b) + (c * c);
	return a;
}
