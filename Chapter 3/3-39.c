#include <stdio.h>

int main( void )
{
		int num, a = 0, count = 0;
		
		printf("Enter number: ");
		scanf("%d", &num);
		
		while ( num != 0 )
		{
			a = num % 10;
			num /= 10;
			
			if ( a == 7 )
			{
				count++;
			}			
		}		
		
		printf("Your number have %d 7", count);
		
		
 	return 0; 
}
