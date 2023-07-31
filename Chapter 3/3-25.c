#include<stdio.h>

int main( void )
{
	int counter = 1;
	
	printf("N\t\t10*N\t\t100*N\t\t1000*N\n\n\n");
	
	while ( counter != 11 )
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n", counter, counter * 10, counter * 100, counter * 1000);
		
		counter++;
	}
	
	
	return 0;
}
