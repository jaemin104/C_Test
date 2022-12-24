#include <stdio.h>
int main_5()
{
	int a[] = { 1,2,3,4,5,9,80,16,15,14,13,12,11 };
	int b[] = { 1,3,5,7,9,11,13,15,17 };
	int c[20];
	int count = 0;

	printf("%d\n", sizeof(a)/sizeof(a[0]));

	int asize = sizeof(a) / sizeof(a[0]);
	int bsize = sizeof(b) / sizeof(b[0]);

	for (size_t i = 0; i < asize; i++)
	{
		for (size_t j = 0; j < bsize; j++)
		{
			if (a[i] == b[j])
				c[count++] = a[i];
		}
	}

	for (size_t i = 0; i < count; i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}