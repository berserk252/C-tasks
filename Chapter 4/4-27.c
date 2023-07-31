#include<stdio.h>
#include<math.h>

int main( void )
{
	int side1, side2, gipotenuza;
	
	for( ; side1 != EOF ; )
	{
		printf("Enter sides( First number EOF, to end) :");
		scanf("%d%d", &side1, &side2);
		printf("Enter gipotenuza : ");
		scanf("%d", &gipotenuza);
		
		for( ; pow(side1, side1) + pow(side2, side2) == pow(gipotenuza, gipotenuza) ;  )
		{
			printf("Its Pifogor tree");
			
			for( ;pow(side2, side2) + pow(side1, side1) == pow(gipotenuza, gipotenuza) ;)
			{
				printf("Its Pifogor tree");
			}
		}
		
	}
	
	return 0;
}
