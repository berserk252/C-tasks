#include<stdio.h>

int main( void )
{
	float interest = 0, principal, rate, days;
	
	printf("Enter the principal amount of the loan(-1 to end)\n");
	scanf("%f", &principal);
	
	while ( principal != -1)
	{
		printf("Enter interest rate\n");
		scanf("%f", &rate);
		
		printf("Enter the loan term in days\n");
		scanf("%f", &days);
		
		interest = principal * rate * days / 365;
		
		printf("Simple interest payments are $%.2f\n\n", interest);
		
		printf("Enter the principal amount of the loan\n");
		scanf("%f", &principal);
	}

	return 0;
}
