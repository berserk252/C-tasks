#include<stdio.h>

int main( void )
{
	int a, b, c = 0, m, n, total, integer;
	
	printf("Enter two integers\n");
	scanf("%d%d", &a, &b);
	
	c = a + b;
	
	printf("%d\n", c);
	
	printf("Enter two integers\n");
	scanf("%d%d", &m, &n);
	
	
	if ( m >= n)
	{
		printf("%d is greater\n", m);
	}
	else 
		if ( n >= m) 
			printf("%d is greater\n", n);
			else
				printf("Integers isn't greaters each other\n");
				
	
	printf("Enter integer, -1 to end\n");
	scanf("%d", &integer);
	
	while ( integer != -1 )
	{
		total += integer;
		
		printf("Enter integer, -1 to end\n");
		scanf("%d", &integer);
		
		
	
	}
	
	if (total == 0 )
		printf("You not enter integers\n");
		
	printf("Total is %d", total);
	
	return 0;
}
