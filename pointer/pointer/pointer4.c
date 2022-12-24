#include <stdio.h>
int main_4()
{
	int a[4] = { 10,20,30,40 };
	int* ptr;

	ptr = a;

	for (size_t i = 0; i < 4; i++)
	{
		printf("%d\n", *(ptr+1));
	}

	



	return 0;
}