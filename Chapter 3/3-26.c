#include<stdio.h>

int main( void )
{
	int counter = 1, a = 3;
	
	printf("A\t\tA+2\t\tA+4\t\tA+6\n\n\n");
	
	while ( counter <= 4 )
	{

		printf("%d\t\t%d\t\t%d\t\t%d\n", a, a + 2, a + 4, a + 6);
		a += 3;
		counter++;
		
	}
	
	return 0;
}
