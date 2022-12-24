#include <stdio.h>
int main_()
{
	long score[3][4] =
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (size_t i = 0; i < 3; i++) //3За
	{
		for (size_t j = 0; j < 4; j++) //4ї­
		{
			printf("%3d", score[i][j]);
		}
		printf("\n");
	}

	return 0;
}