#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	
	if((fp = fopen("datasize.dat", "w")) == NULL)
	{
		puts("Cant open the (datasize.dat)");
		exit(1);
	}
	
	fprintf(fp, "%-30s%s\n","Data type", "size");
	fprintf(fp, "%-30s%d\n", "char",sizeof(char));
	fprintf(fp, "%-30s%d\n", "unsinged char",sizeof(unsigned char));
	fprintf(fp, "%-30s%d\n", "short int",sizeof(short int));
	fprintf(fp, "%-30s%d\n", "unsigned short int",sizeof(unsigned short int));
	fprintf(fp, "%-30s%d\n", "int",sizeof(int));
	fprintf(fp, "%-30s%d\n", "unsigned int",sizeof(unsigned int));
	fprintf(fp, "%-30s%d\n", "long int",sizeof(long int));
	fprintf(fp, "%-30s%d\n", "unsigned long int",sizeof(unsigned long int));
	fprintf(fp, "%-30s%d\n", "float",sizeof(float));
	fprintf(fp, "%-30s%d\n", "double",sizeof(double));
	fprintf(fp, "%-30s%d\n", "long double",sizeof(long double));
	
	fclose(fp);
	
	return 0;
}

