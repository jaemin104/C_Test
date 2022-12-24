#include <stdio.h>
int main_1()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int* ptr1;
	int* ptr2;

	ptr1 = &a;
	ptr2 = &b;

	*ptr1 = 50;
	*ptr2 = 40;

	c = a + b;
	printf("%d = %d + %d\n", c, a, b);
	
	
	

	return 0;
}