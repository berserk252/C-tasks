#include<stdio.h>

int main( void )
{
	int a, b, sum;
	
	printf ("Enter two numbers\n");
	scanf("%d%d", &a, &b);\
	
	sum = a % b;
	
	if ( sum == 0 )
	{
		printf("This numbers is briefly\n");
	}
	
	if ( sum != 0 )
	{
		printf("This numbers is not briefly\n");
	}


	return 0;
}
