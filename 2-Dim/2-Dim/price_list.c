#include <stdio.h>
int main_price_list()
{
	//��Ằ �ܰ�
	int m[3][3] = {
		{5350,3950,2400},
		{5300,4300,2000},
		{5400,3900,2100}
	};

	//��Ằ ���� ������
	int n[] = { 30,50,70 };

	//��ü�� ���� ����
	int p[3] = { 0,0,0 };


	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			p[i] += m[i][j] * n[j];

		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		printf("%d\n", p[i]);
	}

	int best = 0;
	if (p[0] > p[1])
	{
		if (p[1] > p[2])
			best = p[2];
		else
			best = p[1];
	}
	else
	{
		if (p[0] > p[2])
			best = p[2];
		else
			best = p[0];
	}

	printf("\n%d\n", best);

	for (size_t i = 0; i < 3; i++)
	{
		if (p[i] == best)
			printf("%d��° ���԰� ���� �Դϴ�.\n", i + 1);
	}
	

	return 0;
}
