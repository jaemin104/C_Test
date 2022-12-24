#include <stdio.h>
int main_3()
{
	char* ptrT, text[] = "MON TUE WEN TRI FRI SAT SUN";
	printf("%s\n", text);

	ptrT = text; //&text[0];
	printf("%s\n", ptrT);
	printf("%c\n", text[4]);
	printf("%c\n", *(ptrT+4));

	printf("%p\n", ptrT);
	printf("%p\n", &text[4]);
	printf("%p\n", ptrT+4);

	printf("%c\n", *(ptrT+8));

	printf("%s\n", &text[8]); 
	ptrT = ptrT + 8;
	printf("%s\n", ptrT);

	return 0;
}