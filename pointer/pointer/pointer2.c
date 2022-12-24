#include <stdio.h>
int main_2()
{
	char name[] = { 'k','i','m','\0'};
	char name1[] = "kimjaemin";
	char* cPtr = name;

	printf("%s\n", name1);
	printf("%p\n", name);
	printf("%p\n", &name[0]);
	printf("%p\n", &name[2]);
	
	printf("%c\n", *(cPtr+1));
	printf("%c\n", name[1]);

	return 0;
}