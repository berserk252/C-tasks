#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct acc
{
	int account;
	char names[20];
	float currentB;
};

int main(int argc, char *argv[])
{
	
	FILE *ofPtr, *tfPtr, *nfPtr;
	int accountNum, count = 1;
	char name[20];
	float currentBalance, dollarAmount;
	struct acc a = {0, "", 0};
	
	if((ofPtr = fopen("oldmast", "rb+")) == NULL || (tfPtr = fopen("trans", "rb+")) == NULL || (nfPtr = fopen("newmast", "wb")) == NULL)
	{
		printf("could not open files");
		exit(1);
	}
	
	while(1)
	{
		int request;
		printf("Enter 1 for transaction\nEnter 2 for add new account(3 for quite):\n");
		scanf("%d", &request);
		if(request == 1)
		{
			printf("Enter Account Number:");
			scanf("%d", &request);	
			while(1)
			{
				rewind(ofPtr);
				fseek(ofPtr, (request - 1) * sizeof(struct acc), SEEK_SET);
			/*	if(feof(ofPtr))
				{
					printf("Unmatched account for %d", request);
					exit(1);
				}*/
				fread(&a, sizeof(struct acc), 1, ofPtr);
			
				
				float transaction;
				printf("The %d account balance is %.2f\n", a.account, a.currentB);
				printf("Enter transaction:");
				scanf("%f", &transaction);
				a.currentB += transaction;
				printf("Your balance is changed(%.2f)\n", a.currentB);
				fseek(ofPtr, (request - 1) * sizeof(struct acc), SEEK_SET);
				fwrite(&a, sizeof(struct acc), 1, ofPtr);
				fwrite(&a, sizeof(struct acc), 1, tfPtr);
				break;
				
			}
		}
		else if(request == 2)
		{
			a.account = count;
			a.names[0] = '\0';
			a.currentB = 10;
			count++;
			printf("Enter your name and female:");
			scanf("%s", a.names);
			printf("Hi %s your account num is %d\n", a.names, a.account);
			fseek(ofPtr, 0L, SEEK_END);
			fwrite(&a, sizeof(struct acc), 1, ofPtr);
			continue;
		}
		else if(request == 3)
		{
			if(fclose(ofPtr) == EOF || fclose(tfPtr) == EOF || fclose(nfPtr) == EOF)
			{
				puts("Can not close files");
				exit(1);
			}
			exit(0);
		}
		
		
		
	}
	/*fscanf(ofPtr, "%d%s%f", &accountNum, name, &currentBalance);
	fscanf(tfPtr, "%d%f", &accountNum, &dollarAmount);
	fprintf(nfPtr, "%d%s%.2f", accountNum, name, currentBalance);
	*/
	
	return 0;
}

