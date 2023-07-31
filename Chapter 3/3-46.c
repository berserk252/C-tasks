#include<stdio.h>

int main( void )
{
	int num, a ,b , c, d, integer1, integer2;
	
	printf("Enter 4 integers number : ");
	scanf("%d", &num);
	
	d = num % 10;
	num /= 10;
	
	c = num % 10;
	num /= 10;
	
	b = num % 10;
	num /= 10;
	
	a = num % 10;
	num /= 10;
	
	a = ( a + 7 ) % 10;
	b = ( b + 7 ) % 10;
	c = ( c + 7 ) % 10;
	d = ( d + 7 ) % 10;
	
	integer1 = integer1 + c * 1000 ;
	integer1 = integer1 + d * 100 ;
	integer1 = integer1 + a * 10 ;
	integer1 = integer1 + b * 1 ;
	
	printf("%d\n", integer1);
	
	b = integer1 % 10;
	integer1 /= 10;
	
	a = integer1 % 10;
	integer1 /= 10;
	
	d = integer1 % 10;
	integer1 /= 10;
	
	c = integer1 % 10;
	integer1 /= 10;
	
	if ( a >= 7 )
	{
		a -= 7;
	}
	else
	{
		a = ( a + 10 ) - 7;
	}
	
	if ( b >= 7 )
	{
		b -= 7;
	}
	else
	{
		b = ( b + 10 ) - 7;
	}
	
	if ( c >= 7 )
	{
		c -= 7;
	}
	else
	{
		c = ( c + 10 ) - 7;
	}
	
	if ( d >= 7 )
	{
		d -= 7;
	}
	else
	{
		d = ( d + 10 ) - 7;
	}
	
	integer2 = integer2 + a * 1000;
	integer2 = integer2 + b * 100;
	integer2 = integer2 + c * 10;
	integer2 = integer2 + d * 1;
	
	printf("%d", integer2);
	
	return 0;
}
