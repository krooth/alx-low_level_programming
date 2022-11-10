#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers n to 98
 * @n: integer parmeter to be print_to_98 function
 *
 * Return: returns nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; n != 98;)
	{
		if (n > i)
		{
			printf("%d, ", n);
			n--;
		}
		else if (n < i)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d", n);
		}
	}
}
