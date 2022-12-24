#include <stdio.h>
int main()
{
	long a[7] = { 1,2,3,4,5,6,7 };
	long b[7] = { 10,20,30,40,50,60,70 };
	long c[7];

	for (size_t i = 0; i < 7; i++)
	{
		c[i] = a[i] + b[6 - i];
	}

	for (size_t i = 0; i < 7; i++)
	{
		printf("%d ", c[i]);

	}
	return 0;
}