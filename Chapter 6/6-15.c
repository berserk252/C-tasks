#include<stdio.h>

int main( void )
{
	int array[20];
	int x = 0;
	int z = 0;
	int a = 0;
	int y = 0;
	
	for( size_t counter = 0; counter <= 19 ; counter++ )
	{
		printf("Enter number(10-100) : ");
		scanf("%d", &x);
		array[counter] = x;
		z = a = 0;
		for( y = 0; y <= counter && z == 0 ; y++ )
		{
			if ( array[y] != x)
			{
				a++;
			}
			else
			{
				z++;
			}
		}
		
		if ( a == counter )
		{
			printf("**%d\n", x);
		}
		
	}
	
	return 0;
}
