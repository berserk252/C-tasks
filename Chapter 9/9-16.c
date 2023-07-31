#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	int d = 437, i= 437, o= 437, x= 437, u= 437, h= 437;
	
	scanf("%d%i%o%x%u%h%l", &d, &i, &o, &x, &u, &h);
	printf("%d %i %o %x  %u %h\n", d, d, d, d, d);
	printf("%d %i %o %x  %u %h\n", i, i, i, i, i);
	printf("%d %i %o %x  %u %h\n", o, o, o, o, o);
	printf("%d %i %o %x  %u %h\n", x, x, x, x, x);
	printf("%d %i %o %x  %u %h \n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
	printf("%d %i %o %x  %u %h \n", h, h, h, h, h, h, h, h, h, h, h, h, h, h, h);

	
	
	
	return 0;
}

