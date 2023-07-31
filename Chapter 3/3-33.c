#include <stdio.h>

int main( void )
{
		int counter, number, a;
		
		printf("Enter number (1 - 20 )\n");
		scanf("%d", &counter);
		
		
		while ( counter > 20 )
		{
			printf("Your number is biger than 20:Enter number again\n");
			scanf("%d", &counter);
		}		
		
		while ( counter < 1 )
		{
			printf("Your number is smaller than 1:Enter number again\n");
			scanf("%d", &counter);
		}		
		
		number = a = counter;
			
		while ( counter != 0 )
		{
			while ( number != 0 )
			{
				printf("*");
				number--;
			}
			number = a;
			printf("\n");
			counter--;
		}

		
 	return 0; 
}
