#include<stdio.h>

int side ( int x);

int main( void )
{
	int y;
	
	printf("Enter side : ");
	scanf("%d", &y);
	
	printf("\n");
	printf("\n", side (y) );
	
	return 0;
}

int side ( int x)
{
	int num1, num2;
	
	for ( int counter = 1 ; counter <= x ; counter++)
	{
		for(int counter1 = 1 ; counter1 <= x ; counter1++ )
		{
			printf("*");
		}
		
		printf("\n");
		
	}
}

