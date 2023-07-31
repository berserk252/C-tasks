#include<stdio.h>
#include<stdlib.h>

int main( void )
{	
	
	printf("%d\n", 1 + (rand( ) % 2) );
	printf("%d\n", 1 + (rand( ) % 100) );
	printf("%d\n", 0 + (rand( ) % 9) );
	printf("%d\n", 1000 + (rand( ) % 1112) );
	printf("%d\n", -1 + (rand( ) % 1) );
	printf("%d\n", -3 + (rand( ) % 11) );
	return 0;
}
