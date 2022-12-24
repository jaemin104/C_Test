#include <stdio.h>
int main_5()
{
	int a[2][3] = 
	{
		{1,2,3},
		{4,0,5}
	};

	int* ptr;

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		putchar('\n');
	}

	ptr = &a[0][0];
	printf("%p\n", ptr);

	ptr = a;
	printf("%p\n", ptr);

	int cnt = 0;
	while (cnt++ < 6)
	{
		printf("%d ", *ptr);
		ptr++;
	}




	return 0;
}