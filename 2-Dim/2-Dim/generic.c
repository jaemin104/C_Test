#include <stdio.h>

void printArray(int arr[], int size);  //함수 원형

int main()
{
	int parentA[12] = { 0,0,0,0,0,0,1,1,1,1,1,1 };
	int parentB[12] = { 1,1,1,1,1,1,0,0,0,0,0,0 };

	int temp = 0;
	for (size_t i = 4; i < 12; i++)
	{
		temp = parentA[i];
		parentA[i] = parentB[i];
		parentB[i] = temp;
	}
	int size = sizeof(parentA) / sizeof(parentA[0]);
	printArray(parentA, size);
	printArray(parentB, size);

	return 0;
}

void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
