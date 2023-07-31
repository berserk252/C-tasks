#include <stdio.h>

int main( void )
{
	int count = 1;
	
	while ( count <= 3000000 )
	{
		if ( count % 1000000 == 0 )
		{
			printf("%d\n", count);
		}
		
		count++;
	}
		
 	return 0; 
}
