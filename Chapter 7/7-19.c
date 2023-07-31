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

void SML(int memory[100]);
void dump(int memory[100]);

int main( void )
{
	int memory[100] = {0};
	int command = 0;
	int i = 0;
	
	printf("SIMPLETRON welcomes you\n");
	printf("Please,enter your program, one command at a time\n");
	printf("I will display the current address and a question mark (?) as a hint\n");
	printf("The word you entered will be posted at the specified address\n");
	printf("To stop entering the program, enter a number (-9999)\n");
	
	while( command != -9999 && command > -9999 && command < 9999)
	{
		if(i < 10)
		{
			printf("0%d? +", i);
		}
		else
		{
			printf("%d? +", i);
		}
		
		scanf("%d", &command);
		if(command != -9999)
		{
			memory[i] = command;
		}
		i++;
	}
	
	SML(memory);
	
	dump(memory);
	
	return 0;
}

void SML(int memory[100])
{
	int num = 0;
	int accumulator = 0;
	int counter = 0;
	int instructionCounter = 0;
	int operationCode = 0;
	int operand = 0;
	int instructionRegister = 0;
	
	while( operationCode != 43 )
	{
		instructionRegister = memory[instructionCounter];
		operationCode = instructionRegister / 100;
		operand = instructionRegister % 100;
		
		switch(operationCode)
		{
			case READ :
				printf("Enter a number :");
				scanf("%d", &memory[operand]);
				instructionCounter++;
				break;
			
			case WRITE :
				printf("in %d is %d\n", operand,  memory[operand]);
				instructionCounter++;
				break;
			
			case LOAD :
				accumulator = memory[operand];
				printf("Uploading to accumulator\n");
				instructionCounter++;
				break;
			
			case STORE :
				memory[operand] = accumulator;
				printf("Unloading from accumulator\n");
				instructionCounter++;
				break;
			
			case ADD :
				accumulator += memory[operand];
				printf("After adding (%d) to the accumulator it turned out %d\n", memory[operand], accumulator);
				instructionCounter++;
				break;
				
			case SUBTRACT :
				accumulator -= memory[operand];
				printf("After subtracting (%d) from the accumulator it turned out %d\n", memory[operand], accumulator);
				instructionCounter++;
				break;
			
			case DIVIDE :
				if(accumulator == 0 || memory[operand] == 0)
				{
					printf("Division on ZERO\n");
					printf("SIMPLETRONE crashes\n");
					counter = 1;
				}
				else
				{
					accumulator /= memory[operand];
					printf("After the division (%d) from the accumulator it turned out %d\n", memory[operand], accumulator);
					instructionCounter++;
				}
				break;
				
			case MULTIPLY :
				accumulator *= memory[operand];
				printf("After the multiply (%d) to the accumulator it turned out %d\n", memory[operand], accumulator);
				instructionCounter++;
				break;
				
			case BRANCH :
				instructionCounter = operand;
				printf("Going to %d index\n", operand);
				break;
				
			case BRANCHNEG :
				if(accumulator < 0)
				{
					instructionCounter = operand;
					printf("In accumulator negative number.Going to %d index\n", operand);
				}
				else
				{
					instructionCounter++;
				}
				break;
			
			case BRANCHZERO :
				if(accumulator == 0)
				{
					instructionCounter = operand;
					printf("In accumulator ZERO.Going to %d index\n", operand);
				}
				else
				{
					instructionCounter++;
				}
				break;
			
			case HALT :
				counter = 1;
				printf("Ending the work\n");
				break;						
		}
		getchar();
	}
}

void dump(int memory[100])
{
	printf("\n\n\n1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	int i = 1;
	
	for(int counter = 0 ; counter < 100; counter++)
	{
		if(counter % 10 == 0)
		{
			printf("\n%d ", i);
			i++;
		}
		printf("+%d/t", memory[counter]);
		
	}
}

