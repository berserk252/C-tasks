#include<stdio.h>

int main( void )
{
	int counter = 0, number, largest1 = 0, largest2 = 0;
	
	while ( counter < 10)
	{
		printf("Enter 10 numbers\n");
		scanf("%d", &number);
		
		if ( number > largest1 )
		{
			largest2 = largest1;
			largest1 = number;
		}
		
	}
	
	printf("%d, %d", largest1, largest2);
	
	return 0;
}
