#include<stdio.h>

int main( void )
{
	int e, integer = 1;
	
	printf("Enter integer: ");
	scanf("%d", &e);
	printf("%d = 1 + ", e);
	
	while( e != 0 )
	{
		if ( e == 1 )
		{
			printf("(x^%d) / %d", integer, e);
		}
		else 
		{
			printf("(x^%d) / %d + ", integer, e);
		}
		
		e--;
		integer++;
	}
	
	
	return 0;
}
