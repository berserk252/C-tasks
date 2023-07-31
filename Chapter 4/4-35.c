#include<stdio.h>

int main( void )
{
	unsigned int counter = 1;
	
	do {
 		printf( "%u ", counter );
	} while ( ++counter <= 10 );
	
	//printf( "%u ", counter );
	counter = 1;
	
	if( printf( "%u ", counter ))
	{		
		while( ++counter <= 10 )
			printf( "%u ", counter );
	}

	
	return 0;
}
