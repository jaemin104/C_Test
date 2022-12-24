#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,0 };
	int c[5];

	int* ptr[3];

	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;

	for (size_t i = 0; i < 5; i++)
	{
		*(ptr[2]+i) = *(ptr[0]+i) + *(ptr[1]+i);
	}

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ", c[i]);
	}


	return 0;
}