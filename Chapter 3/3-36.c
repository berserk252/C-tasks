#include<stdio.h>

int main( void )
{
	long int num, total = 0, b, d = 1;
	
	printf("Enter number (0 1)\n"); 
	scanf("%d", &num);
	
	while ( num != 0 ) 
	{
		b = num % 10;
		num /= 10;
		b *= d;
		d *= 2;
		total += b;
		
	}
	
	printf("Total is %d\n", total);
	
	return 0;
}
