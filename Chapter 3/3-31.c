#include<stdio.h>

int main( void )
{
	int x = 9, y = 11;
	
	if ( x < 10 ) {
		if ( y > 10)
		{
			printf("*****\n");
		}
	}
	else {
		printf("#####\n");
		printf("$$$$$\n");
	}
	//-----------------
	x = 11;
	y = 9;
	
	if ( x < 10 ) {
		if ( y > 10)
		{
			printf("*****\n");
		}
	}
	else {
		printf("#####\n");
		printf("$$$$$\n");
	}
	
	return 0;
}
