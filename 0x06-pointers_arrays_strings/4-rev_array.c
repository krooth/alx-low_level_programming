#include "main.h"


/**
	* reverse_array - concatnates strings
	* @a: int parameter
	* @n: int parameter
	*
	* Return: returns nothing
	*/

void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			temp = a[j - 1];
			a[j - 1] =  a[j];
			a[j] = temp;
		}
	}
}
