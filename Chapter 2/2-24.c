#include<stdio.h>

int main( void )
{
	int a;
	
	printf("Enter integer\n");
	scanf("%d", &a);
	
	a = a % 2;
	
	if ( a == 0 )
	{
		printf("Your number is even\n");	
	}
	
	if ( a != 0 )
	{
		printf("Your number is not even\n");
	}


	return 0;
}
