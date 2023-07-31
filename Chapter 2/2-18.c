#include<stdio.h>

int main( void )
{
	int a, b;
	
	printf("Enter two integers\n");
	scanf("%d%d", &a, &b);
	
	if( a > b )
	{
		printf("%d is large\n", a);
	}
	
	if ( b > a )
	{
		printf("%d is large\n", b);	
	}
	
	if ( a == b )
	{
		printf("This numbers are equal\n");
	}

	return 0;
}
