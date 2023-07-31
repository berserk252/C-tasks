#include<stdio.h>

int main( void )
{
	float hour, hour2, tarif, total;
	
	
	printf("Enter # hours worked(-1 to end)\n");
	scanf("%f", &hour);
	
	while ( hour != -1 )
	{
		printf("Enter the employee's hourly rate($00.00)\n");
		scanf("%f", &tarif);
		
		if ( hour > 40 )
		{
			hour2 = hour - 40;
			
			total = hour2  * tarif * 1.5;
			total = ( 40 * tarif) + total;
			
		}
		else
		{
			total = hour * tarif;
		}
			
		printf("Salary is %.2f\n", total);
		
		printf("Enter # hours worked(-1 to end)\n");
		scanf("%f", &hour);
	}
	
	return 0;
}
