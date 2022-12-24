#include <stdio.h>
int main_star()
{
	printf("1\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < i+1; j++)
		{
			printf("%c ", '*');
		}
		printf("\n");
	}

	printf("\n");

	printf("2\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 9-i; j++)
		{
			printf("%c ", ' ');
		}
		for (size_t j = 0; j < i+1; j++)
		{
			printf("%c ", '*');
		}
		printf("\n");
	}

	printf("\n");

	printf("3\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			printf("%c ", ' ');
		}
		for (size_t j = 0; j < 10-i; j++)
		{
			printf("%c ", '*');
		}
		printf("\n");
	}
	printf("\n");

	printf("4\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10-i; j++)
		{
			printf("  ");
		}
		for (size_t j = 0; j < i+1; j++)
		{
			printf("%c ", '*');
		}
		for (size_t j = 0; j < i; j++)
		{
			printf("%c ", '*');
		}
		printf("\n");
	}

	return 0;
}