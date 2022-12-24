#include <stdio.h>
int main_2()
{
	printf("당신이 구하고 싶은 구구단은 몇단부터 몇단인가요?");
	int n1, n2;
	n1 = n2 = 0;
	scanf_s("%d", &n1);
	scanf_s("%d", &n2);

	for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = n1; j < n2 + 1; j++)
		{
			printf("%d * %d = %d\t", j, i, (i * j));
		}
		printf("\n");
	}

	return 0;
}