#include<stdio.h>

int main( void )
{
	int x, y;
	
	x = 5;
	y = 8;
	
	if ( y == 8 ){
		if ( x == 5 ){
		printf("@@@@@\n");
		printf("$$$$$\n");
		printf("&&&&&\n\n\n");
		}
	}
	else {
		printf("#####\n\n\n");
	}
	//-------------------
	
	if ( y == 8 ){
		if ( x == 5 ){
		printf("@@@@@\n\n\n");
		}
	}
	else {
		printf("#####\n");
		printf("$$$$$\n");
		printf("&&&&&\n\n\n");
	}
	
	//------------------
	
		if ( y == 8 ){
		if ( x == 5 ){
		printf("@@@@@\n");
		printf("&&&&&\n\n\n");
		}
	}
	else {
		printf("#####\n");
		printf("$$$$$\n\n\n");
	}
	
	//-----------------
	
	x = 5;
	y = 7;
	
	if ( y == 8 ){
		if ( x == 5 ){
		printf("@@@@@\n");
		}
	}
	else {
		printf("#####\n");
		printf("$$$$$\n");
		printf("&&&&&\n\n\n");
	}
	
	
	return 0;
}
