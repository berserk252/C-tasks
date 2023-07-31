#include<stdio.h>

int main( void )
{
	int num1 = 0, a;
	
	printf("Enter five numbers integer\n");
	scanf("%d", &a);
	
    num1 = a / 10000;
    a = a % 10000;
    
    printf("%d   ", num1);
    
    num1 = a / 1000;
    a = a % 1000;
    
    printf("%d   ", num1);
    
    num1 = a / 100;
    a = a % 100;
    
    printf("%d   ", num1);
    
    num1 = a / 10;
    a = a % 10;
    
    printf("%d   ", num1);
 
	num1 = a / 1;
    a = a % 1;
    
    printf("%d   ", num1);

	return 0;
}
