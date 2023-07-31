#include<stdio.h>

int multiple (int x, int y);

int main( void )
{
	int num1, num2;
	
	for(int counter = 1 ; counter <= 5; counter++ )
	{
		printf("Enter two numbers : ");
		scanf("%d%d", &num1, &num2);
		
		if ( multiple ( num1, num2) == 1)
		{
			printf("Your numbers are multiples of each other\n");
		}
		else
		{
			printf("Your numbers are not multiples of each other\n");
		}
		
	}

	return 0;
}

int multiple (int x, int y)
{
	if ( x % y == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
