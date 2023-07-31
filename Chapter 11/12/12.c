#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct instruments{
	int num;
	char name[30];
	int quantity;
	int price;
};
int count = 1;

int add(FILE *fp);
int change(FILE *fp);

int main(int argc, char *argv[])
{
	FILE *fp;
	int request;
	
	if((fp = fopen("hardware", "rb+")) == NULL)
	{
		puts("Can not open the file");
		exit(1);
	}
	
	while(1)
	{
		printf("Enter request\n(1-for add new instrument)\n(2-for change quantity or price of instruments)\n(3-for quite):");
		scanf("%d", &request);
	
		if(request == 1)
		{
			if(add(fp) != 1)
			{
				printf("The mistake in add\n");
				exit(1);
			}
		}
		else if(request == 2)
		{
			if(change(fp) != 1)
			{
				printf("The mistake in change\n");
				exit(1);
			}
		}
		else if(request == 3)
		{
			break;
		}
	}
	
	return 0;
}

int add(FILE *fp)
{
	struct instruments instr = {0, "", 0, 0};
	instr.num = count;
	count++;
	
	printf("Enter the instruments name:");
	getchar();
	gets(instr.name);
	printf("Enter the quantity of instrument:");
	scanf("%d", &instr.quantity);
	printf("Enter the price of instrument:");
	scanf("%d", &instr.price);
	
	fseek(fp, 0L, SEEK_END);
	fwrite(&instr, sizeof(struct instruments), 1, fp);
	return 1;
}

int change(FILE *fp)
{
	struct instruments instr = {0, "", 0, 0};
	int acc, request;
	
	printf("Enter num of instruments:");
	scanf("%d", &acc);
	fseek(fp, (acc - 1) * sizeof(struct instruments), SEEK_SET);
	fread(&instr, sizeof(struct instruments), 1, fp);
	
	printf("The num is %d\nAt this moment we have %d of %s and price of this product is %d$\n", instr.num, instr.quantity, instr.name, instr.price);
	while(1)
	{
		printf("What do you want to change\n1 - price\n2 - quantity\n3-for quite\nEnter please:");
		scanf("%d", &request);
	
		if(request == 1)
		{
			printf("Please enter the new price:");
			scanf("%d", &instr.price);
		}
	
		if(request == 2)
		{
			printf("Please enter the new quantity:");
			scanf("%d", &instr.quantity);
		}
	
		if(request == 3)
		{
			return 1;
		}
	
		fseek(fp, (acc - 1) * sizeof(struct instruments), SEEK_SET);
		fwrite(&instr, sizeof(struct instruments), 1, fp);
	}
	
	
}

