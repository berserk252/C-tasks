#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	int farenheit;
	float celcius;
	
	printf("Enter farenheit:(0 - 212)");
	scanf("%d", &farenheit);
	
	celcius = 5.0 / 9.0 * (farenheit - 32);
	
	printf("%-10sCELCIUS\n", "FARENHEIT");
	printf("%+-10d%+.3f", farenheit, celcius);
	
	
	return 0;
}

