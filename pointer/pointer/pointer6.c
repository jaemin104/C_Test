#include <stdio.h>
int main_6()
{
	char* names[4];

	names[0] = "kim jae min";
	names[1] = "kim ji min";
	names[2] = "kim ki tae";
	names[3] = "park seung hee";

	for (size_t i = 0; i < 4; i++)
	{
		printf("%d¹ø %s\n", i+1, names[i]);
	}

	


	return 0;
}