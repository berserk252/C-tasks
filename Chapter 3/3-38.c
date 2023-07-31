#include <stdio.h>

int main( void )
{
		int count = 1;
		
		while ( count <= 100 )
		{
			printf("*");
			
			if ( count % 10 == 0 )
				printf("\n");
				
			count++;
		}
		
 	return 0; 
}
