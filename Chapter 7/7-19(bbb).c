#include<stdio.h>
#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

void SML(int arr[100]);

int main( void )
{
	int commandArr[100] = {0};
	int command = 0;
	int i = 0;
	
	for(; command / 100 != HALT ; i++)
	{
		if(i < 10)
		{
			printf("0%d +", i);
		}
		else
		{
			printf("%d +", i);
		}
		
		scanf("%d", &command);
		
		commandArr[i] = command;
	}
	
	SML(commandArr);
	
	return 0;
}

void SML(int arr[100])
{
	int num = 0;
	int acc = 0;
	int counter = 0;
	
	for(int i = 0; counter != 1; i++)
	{
		switch(arr[i] / 100)
		{
			case READ :
				printf("Enter a number :");
				scanf("%d", &num);
				arr[arr[i] % 100] = num;
				break;
			
			case WRITE :
				printf("%d\n", arr[arr[i] % 100]);
				break;
			
			case LOAD :
				acc = arr[arr[i] % 100];
				printf("Uploading to accumulator\n");
				break;
			
			case STORE :
				arr[arr[i] % 100] = acc;
				printf("Unloading from accumulator\n");
				break;
			
			case ADD :
				acc += arr[arr[i] % 100];
				printf("After adding to the accumulator it turned out %d\n", acc);
				break;
				
			case SUBTRACT :
				acc -= arr[arr[i] % 100];
				printf("After subtracting from the accumulator it turned out %d\n", acc);
				break;
			
			case DIVIDE :
				acc /= arr[arr[i] % 100];
				printf("After the division from the accumulator it turned out %d\n", acc);
				break;
				
			case MULTIPLY :
				acc *= arr[arr[i] % 100];
				printf("After the multiply to the accumulator it turned out %d\n", acc);
				break;
				
			case BRANCH :
				i = arr[i] % 100;
				printf("Going to %d index\n", arr[i] % 100);
				break;
				
			case BRANCHNEG :
				if(acc < 0)
				{
					i = arr[i] % 100;
					printf("In accumulator negative number.Going to %d index\n", arr[i] % 100);
				}
				break;
			
			case BRANCHZERO :
				if(acc == 0)
				{
					i = arr[i] % 100;
					printf("In accumulator ZERO.Going to %d index\n", arr[i] % 100);
				}
				break;
			
			case HALT :
				counter = 1;
				printf("Ending the work\n");
				break;						
		}
	}
}

