#include<stdio.h>

int integerPower ( int base, unsigned int exponent);

int main( void )
{
	int base, exponent;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &base, &exponent);
	
	printf(" number is %d", integerPower (base, exponent ));

	return 0;
}

int integerPower ( int base, unsigned int exponent)
{
	int counter, num = 1;
	
	for( counter = 1 ; counter <= exponent ; counter++ )
	{
		num *= base ;
	}
	
	return num;
}
