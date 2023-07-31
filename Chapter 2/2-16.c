#include<stdio.h>

int main( void )
{
	int a, b;
	
	printf("Enter two integers\n");
	scanf("%d%d", &a, &b);
	
	printf("amount of division is %d\n", a / b);
	printf("multiplication amount is %d\n", a * b);
	printf("mod sum is %d\n", a % b);
	
	return 0;
}
