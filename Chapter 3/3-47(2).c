#include<stdio.h>

int main( void )
{
	int e;
	
	printf("Enter integer: ");
	scanf("%d", &e);
	printf("%d = 1 + ", e);
	
	while ( e != 0 )
	{
		if ( e == 1 )
		{
			printf("(1 / %d!)", e / 1 );
		}
		else
		{
			printf("(1 / %d!) + ", e / 1);
		}
		e--;
	}
	
	
	return 0;
}
