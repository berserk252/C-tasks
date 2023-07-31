#include<stdio.h>

int main( void )
{
	int x = 4, y = 7, a = 4, b = 4, g = 6, Y = 5, i = 6 ,j = 6;
	
	printf("%d", !(x < 5) && ! (y >= 7 ));
	printf("%d", !(x < 5) || ( y >= 7));
	
	
	printf("%d", !(a == b) || !(g != 5));
	printf("%d", !( a == b) && (g != 5));
	
	printf("%d", ! ( (x <= 8) && (Y > 4) ));
	printf("%d", !((x <= 8) || !( Y > 4) ));
	
	printf("%d", !( i > 4 ) || ( j <= 6 ));
	printf("%d", !( i > 4) && !( j <= 6 ));

	return 0;
}
