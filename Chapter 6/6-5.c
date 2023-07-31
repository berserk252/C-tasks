#include<stdio.h>
# define SIZE 3

int main( void )
{
	int table[SIZE] [SIZE];
	table[SIZE] [SIZE] = { {1, 8}, {2, 4, 6}, {5} };
	
	for(int x = 0 ; x <= SIZE ; x++)
	{
		for (int y = 0 ; y <= SIZE ; y++ )
		{
			table[x] [y] = x + y; 
		}
	}
	
	for(int x = 0 ; x <= SIZE - 1; x++)
	{
		for (int y = 0 ; y <= SIZE - 1; y++ )
		{
		printf("table[%d] [%d] = %d\n", x, y, table [x] [y] );
		}
	}
	
	return 0;
}
