#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct person
{
	char lastname[15];
	char firstname[15];
	char age[2];
};

int main(int argc, char *argv[])
{
	FILE *fp;
	struct person name = {"unsigned", "", "0"}, a = {"Lennon", "John", "85"};
	
	if((fp = fopen("nameage.dat", "w")) == NULL)
	{
		puts("cant open files");
		exit(1);
	}
	fscanf(fp, "%s%s%s", a.lastname, a.firstname, a.age);
	
	if(strcmp(a.lastname, name.lastname) != 0)
	{
		puts("No info");
	}
	
	for(int i = 0; i < 100; i++)
	{
		fprintf(fp, "%s%s%s", name.lastname, name.firstname, name.age);
	}
	return 0;
}

