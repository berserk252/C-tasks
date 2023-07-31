#include<stdio.h>

int main( void )
{
	
	printf("Uslovie1\tUslovie2\tUslovie1 && Uslovie2\n");
	printf("0\t\t0\t\t0\n");
	printf("0\t\t1\t\t0\n");
	printf("1\t\t1\t\t0\n");
	printf("1\t\t1\t\t1\n");
	
	printf("Uslovie1\tUslovie2\tUslovie1 || Uslovie2\n"); 
	printf("0\t\t0\t\t0\n");
	printf("0\t\t1\t\t1\n");
	printf("1\t\t0\t\t1\n");
	printf("1\t\t1\t\t1\n");
	
	printf("Uslovie1\t!Uslovie1\n");
	printf("0\t\t1\n");
	printf("1\t\t0\n");
	return 0;
}
