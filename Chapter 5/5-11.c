#include<stdio.h>

double roundToInteger ( double x);
double roundToTenths ( double y);
double roundToHundreths ( double z);
double roundToThousandths ( double c);

int main( void )
{
	double num;
	
	printf("Enter num : ");
	scanf("%lf", &num);
	
	printf("Number in Ineteger : %.4f\n", roundToInteger ( num ) );
	printf("Number in Tenths  : %.4f\n", roundToTenths ( num ) );
	printf("Number in Hundreths  : %.4f\n", roundToHundreths  ( num ) );
	printf("Number in Thousandths  : %.4f\n", roundToThousandths ( num ) );
	
	return 0;
}

double roundToInteger ( double x)
{
	x = ( x + .5 );
	return x;
}

double roundToTenths ( double x)
{
	x = ( x * 10 + .5 ) / 10;
	return x;
}

double roundToHundreths ( double x)
{
	x = ( x * 100 + .5 ) / 100;
	return x;
}

double roundToThousandths ( double x)
{
	x = ( x * 1000 + .5 ) / 1000;
	return x;
}
