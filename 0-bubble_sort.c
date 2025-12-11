#include "sort.h"


void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t j, i;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
			}
		}
	}


}
