#include "main.h"
#include <stdio.h>

/**
	* print_array - prints array
	* @a: integer array
	* @n: integer
	*
	* Return: returns nothing
	*/

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n");
		}
	}
	printf("\n");
}
