#include<stdio.h>

int side ( int x, char f);

int main( void )
{
	int y;
	char z;
	
	printf("Enter character : ");
	scanf("%c", &z);
	
	printf("Enter side : ");
	scanf("%d", &y);
	
	
	side (y, z);
	
	printf("\n");
	
	return 0;
}

int side ( int x, char f)
{
	int num1, num2;
	
	for ( int counter = 1 ; counter <= x ; counter++)
	{
		for(int counter1 = 1 ; counter1 <= x ; counter1++ )
		{
			printf("%c", f);
		}
		
		printf("\n");
		
	}
}

