#include<stdio.h>


int main( void )
{
	char f[] = "abcdefgh";
	float a[11] = {0}, b[10] = {0};  
	int g[6] = {0};
	float c[100]  = {0}; 
	float total = 0;
	float w[99]  = {1.2, 1.4, 1.5, 1.6, 2.5 };
	float minimum = 0, max = 0;
	int x = 0;
	
	printf("%c\n", f[7] );
	printf("Enter float number: ");
	scanf("%f", b );
	
	printf("%.2f\n", b[0]);
	
	for(  x = 0 ; x <= 5 ; x++)
	{
		g[x] = 8;
		printf("g[%d] = %d\n", x, g[x]);
	}
	
	for(int k = 0; k <= 100 ; k++)
	{
		c[k] = 2;
	}
	
	for ( x = 0 ; x <= 100 ; x++ )
	{
		total += c[x];
	} 
	printf("Total is %.2f\n", total);
	
	
	for ( x = 0 ; x <= 99 ; x++)
	{
		if ( minimum > w[x] )
		{
			minimum = w[x];
		}
	}
	
	printf("minimum is %.2f\n", minimum );
	
	
	for ( x = 0 ; x <= 99 ; x++)
	{
		if ( max < w[x] )
		{
			max = w[x];
		}
	}
	
	printf("max is %.2f\n", max );
	
	return 0;
}
