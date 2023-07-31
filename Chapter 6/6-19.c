#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	int dice1 = 0, dice2 = 0;
	int face = 0;
	int totalSumsOfFaces[14] = {0};
	
	srand(dice1);
	srand(dice2);
	
	for(int x = 0; x != 36000 ; x++)
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		
		face = dice1 + dice2;
		
		totalSumsOfFaces[face] += 1; 
	}
	
	for( int x = 2 ; x <= 12 ; x++)
	{
		printf("%d side dropped %d times\n", x, totalSumsOfFaces[x]);
	}
	
	
	return 0;
}
