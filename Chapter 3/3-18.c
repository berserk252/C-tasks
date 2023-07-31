#include<stdio.h>

int main( void )
{
	float schet, nbalans, rasxod, kredit, rkredit, total;
	
	printf("Vvedite nomer scheta(-1 esli vvod zakonchen)\n");
	scanf("%f", &schet);
	
	while ( schet != -1 )
	{
		
		printf("Vvedite nachalnyj balans\n");
		scanf("%f", &nbalans);
		
		printf("Vvedite Obshuyu summu rasxodov\n");
		scanf("%f", &rasxod);
		
		printf("Vvedite obshuyu summu kredita\n");
		scanf("%f", &kredit);
		
		printf("Vvedite predelniy razmer kredita\n");
		scanf("%f", &rkredit);
		
		printf("Schet : %f\n", schet);
		
		printf("Presdelniy razmer kredita : %f\n", rkredit);
		
		total = nbalans + rasxod - kredit;
		
		printf("Balans : %f\n", total);
		
		if ( total > rkredit)
		{
			printf("Predelniy razmer kredita prevyshen\n");	
		}
		
		printf("Vvedite nomer scheta(-1 esli vvod zakonchen)\n");
		scanf("%f", &schet);
	}
	

	return 0;
}
