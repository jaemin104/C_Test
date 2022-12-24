#include <stdio.h>
int main_1()
{
	char str1[20] = { 'i', 'n', 'h', 'a' };
	char str2[5] = { 'T', 'e', 'c', 'h' };
	str1[4] = ' ';
	char* str3 = "Test123";
	for (size_t i = 0; i < 4; i++)
	{
		str1[i + 5] = str2[i];
	}

	str1[0] = 'I';

	printf("%s\n", str1);
	printf("%s\n", str3);

	return 0;
}