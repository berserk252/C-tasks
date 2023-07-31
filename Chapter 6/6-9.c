#include<stdio.h>

int main( void )
{
	int t[ 2 ][ 5 ] = { {1, 5, 4, 9, 7}, {2, 3, 6, 8, 10} };
	int hold;
	int total;
	
	printf("2\n");
	printf("5\n");
	printf("10\n");
	
	
	for(int x = 0 ; x <= 4 ; x++ )
	{
		printf("T[1] [%d] = %d\n", x, t[1][x]);
	}
	
	puts("");
	
	for( int x = 0 ; x <= 1 ; x++ )
	{
		printf("T[%d] [3] = %d\n", x, t[x][3] );
	}
	
	puts("");
	
	t[0][1] = 0;
	
	t[0][0] = 0;
	t[0][1] = 0;
	t[0][2] = 0;
	t[0][3] = 0;
	t[0][4] = 0;
	t[1][0] = 0;
	t[1][1] = 0;
	t[1][2] = 0;
	t[1][3] = 0;
	t[1][4] = 0;
	
	for ( int x = 0 ; x <= 1 ; x++)
	{
		for( int y = 0 ; y <= 4 ; y++ )
		{
			printf("T[%d][%d] = %d\n", x, y, t[x][y]);
		}
	}
	
	puts("");
	
	for ( int x = 0 ; x <= 1 ; x++)
	{
		for( int y = 0 ; y <= 4 ; y++ )
		{
			t[x][y] = 0;
			printf("T[%d][%d] = %d\n", x, y, t[x][y]);
		}
	}
	
	puts("");
	
	for ( int x = 0 ; x <= 1 ; x++)
	{
		for( int y = 0 ; y <= 4 ; y++ )
		{
			scanf("%d", &t[x][y]);
		}
	}
	
	for ( int x = 0 ; x <= 1 ; x++)
	{
		for( int y = 0 ; y <= 4 ; y++ )
		{
			printf("T[%d][%d] = %d\n", x, y, t[x][y]);
		}
	}
	
	hold = t[0][0];
	
	for ( int x = 0 ; x <= 1 ; x++)
	{
		for( int y = 0 ; y <= 4 ; y++ )
		{
			
			if( hold > t[x][y] )
			{
				hold = t[x][y];
			}
		}
	}
	
	printf("Mnimum is %d\n", hold);
	
	puts("");
	
	for(int x = 0 ; x <= 4 ; x++ )
	{
		printf("T[0] [%d] = %d\n", x, t[0][x]);
	}
	
	total = t[0][3] + t[1][3];
	
	printf("Total is %d\n", total);
	
	printf("\t\t0\t1\t2\t3\t4\t\n\n");

	for ( int x = 0 ; x <= 1 ; x++)
	{
		printf("\t\t");
		for( int y = 0 ; y <= 4 ; y++ )
		{
			printf("%d\t", t[x][y]);
		}
		
		puts("");
	}
	
	
	
	return 0;
}
