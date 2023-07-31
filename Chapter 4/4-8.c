#include<stdio.h>

int main( void )
{
	int	x;
	int y;
	int i;
	int j;
	
	printf("Enter two integers in the range 1-20: ");
	scanf("%d%d", &x, &y );
	
	for ( i = 1; i <= y; i++ )
	{
		for (j = 1; j = x; j++ )
		{
			printf("@");
		}
	
		printf("\n");
	}
	
	return 0;
}
