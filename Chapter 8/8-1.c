#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	char c = 'a';
	int x, y, z;
	float d, e, f;
	char *ptr;
	char s1[100];
	char s2[100];
	
	c = toupper(c);
	
	printf("'%c'%sdigit", c, isdigit(c) ? "is a " : "is not a ");
	
	printf("\n%ld ", atol("123456"));
	
	printf("\n'%c'%s control", c, iscntrl('/n') ? "is a" : "is not a");
	
	puts("");
		
	gets(s1);
	
	puts(s1);
	
	ptr = strrchr(s1, c);
	
	putchar(c);
	
	printf("%f\n", atof("8.63582"));
	
	printf("'%c'%sletter\n", c, isalpha(c) ? "is a " : "is not a");
	
	c = getcahr();
	
	ptr = strstr(s1, s2);
	
	printf("'%c'%sprinting cahracter\n", c, isprint(c) ? "is a " : "is not a");
	
	sscanf("1.27 10.3, 9.432", "%f%f%f", &d, &e, &f);
	
	strcpy(s1, s2);
	
	ptr = strpbrk(s1, s2);
	
	printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));
	
	ptr = strchr(s1, c);
	
	sprintf(s1, "%7d%7d%7d", x, y, z);
	
	strncat(s1, s2, 10);
	
	printf("strlen(s1) = %u\n", strlen(s1));
	
	printf("%d\n", atop("-21"));
	
	ptr = strtok(s2, ",");
	
	
	
	
	
	return 0;
}

