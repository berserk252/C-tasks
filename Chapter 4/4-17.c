#include<stdio.h>

int main( void )
{
	int acc;
	float prk, balans;
	
	for ( ; acc != EOF ; )
	{
		printf("Enter customer account number : ");
		scanf("%d", &acc);		
		printf("Enter maximum loan amount : ");
		scanf("%f", &prk);
		printf("Enter current client balance : ");
		scanf("%f", &balans);
		
		prk = prk / 2;
		
		printf("The maximum loan amount after recession : %.2f\n", prk);
		
		if( prk < balans )
		{
			printf("You have exceeded the maximum loan amount.\n\n\n");
		}
		else
		{
			printf("You did not exceeded the maximum loan amount.\n\n\n");
		}
	}
	
	return 0;
}
