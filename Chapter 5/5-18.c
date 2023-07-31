#include<stdio.h>

int even ( int x);

int main( void )
{
	int num;

	for( int counter = 1; counter <= 5; counter++)
	{
		printf("Enter number : ");
		scanf("%d", &num);
		
		if( even ( num) == 1 )
		{
			printf("Your number is even\n");
		}
		else
		{
			printf("Your number isn't even\n");
		}
	}
	
	return 0;
}

int even ( int x)
{
	if ( x % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
