#include<stdio.h>

int main( void )
{
	int a, b, c;
	
	printf("Enter three diferent integers;\n");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("Sum is %d\n", a + b + c);
	printf("Average is %d\n", (a + b + c) / 3);
	printf("Product is %d\n", a * b * c);
			
				
	if ( a >= b )
	{
		if ( a >= c )
		{
	
		printf("%d is largest\n", a);
		
			
		}
		
	}	
			
	if ( b >= c )
	{
		if ( b >= a )
		{
		
		printf("%d is largest\n", b);
			
		}
	}	
	
	if( c >= a )
	{
		if ( c >= b)
		{
			
		printf("%d is largest\n", c);	
	
			
		}
	}
	
		if ( a <= b )
	{
		if ( a <= c )
		{
	
		printf("%d is smallest\n", a);
		
			
		}
		
	}	
			
	if ( b <= c )
	{
		if ( b <= a )
		{
		
		printf("%d is smallest\n", b);
			
		}
	}	
	
	if( c <= a )
	{
		if ( c <= b)
		{
			
		printf("%d is smallest\n", c);	
	
			
		}
	}
		
	return 0;
}
