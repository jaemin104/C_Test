#include <stdio.h>
int main_()
{
	int iArr[5];
	
	iArr[0] = 10;
	iArr[1] = 20;
	iArr[2] = 30;
	iArr[3] = 40;
	iArr[4] = 50;

	int sum = 0;
	for (size_t i = 0; i < 5; i++)
	{
		sum += iArr[i];
	}
	printf("%d\n", sum);

	return 0;
}