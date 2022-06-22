#include "main.h"
#include <stdio.h>

/**
	* print_diagsums - sums diagonal of matrix
	* @a: character array to print from
	* @size: size of array
	*
	* Return: returns nothing
	*/

void print_diagsums(int *a, int size)
{
	int i, j, rt_sum = 0, lft_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				rt_sum += *((a + i*size) +j);
			}
			if ((i + j) == size - 1)
			{
				lft_sum += *((a + i*size) +j);
			}
		}
	}
	printf("%d, %d\n", rt_sum, lft_sum);
}
