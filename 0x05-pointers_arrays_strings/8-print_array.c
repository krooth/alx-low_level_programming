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

	for (i = 0; i < n; i++)
	{
		if (a[i + 1] != '\0')
			printf("%d, ", a[i]);
	}
	printf("\n");
}
