#include<stdio.h>

int main( void )
{
	int counts[10] = { 0 };
	int bonus[15] = { 0 };
	float monthlyTemperature[12] = { 0 };
	int bestScores[5] = {5, 4, 6, 8, 7};
	
	for(int x; x <= 15 - 1 ; x++ )
	{
		bonus[x]++;
		printf("%d ", bonus[x]);
	} 
	
	puts("");
	
	printf("Enter the float grade :");
	for ( int x = 0 ; x <= 12  ; x++ )
	{
		scanf("%f", &monthlyTemperature[x]);	
		
	}
	
	puts("");
	
	for(int x = 0; x <= 5 - 1 ; x++ )
	{
		printf("%4d", bestScores[x]);
	}
	
	return 0;
}
