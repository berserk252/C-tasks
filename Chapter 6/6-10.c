#include<stdio.h>

int main( void )
{
	int sellers[10];
	int gS, total = 0;
	
	for(int x = 0 ; x <= 9 ; x++)
	{
		printf("Enter the number that the seller receives per week :");
		scanf("%d", &sellers[x]);
		printf("Enter gross sales :");
		scanf("%d", &gS);
		
		total = ((gS * 9) / 100) + sellers[x];
		
		printf("(%d) this seller should get %d$\n\n", x, total);
	}

	return 0;
}
