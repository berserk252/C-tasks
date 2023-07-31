#include<stdio.h>

int main( void )
{
	float z, total = 0;
	
	printf("Enter the amount of sales in dollars\n");
	scanf("%f", &z);
	
	while ( z != -1 )
	{
		total = (z / 100) * 9 + 200;
		
		printf("Salary : %.2f\n", total);
		
		printf("Enter the amount of sales in dollars\n");
		scanf("%f", &z);
	}
	
	
	
	
	

	return 0;
}
