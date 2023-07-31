#include <stdio.h>

int main( void )
{
		int counter, counter1, b, d;
		
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
		
		counter1 = counter;
		b = counter;
		d = counter;
		b -= 2;
		counter -= 1;
				
		while( counter1 != 0 )
		{
			printf("*");
			counter1--;
		}
		counter1 = d;
		counter1 -= 2;
		
		while ( counter != 0 )
		{
			if ( counter != 1)
			{
				b = d;
				b -= 2;	
			}
			printf("\n");
			printf("*");
			
				while ( b != 0)
				{
					printf(" ");
					b--;
				}
		
			printf("*");			
		
			counter--;

		}
		
		while( counter1 != 0 )
		{
			printf("*");
			counter1--;
		}
		
 	return 0; 
}
