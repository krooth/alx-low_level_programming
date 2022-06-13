#include "main.h"

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
		if (a[i] != '\0')
			printf("%d, ", a[i]);
	}
	printf("\n");
}
