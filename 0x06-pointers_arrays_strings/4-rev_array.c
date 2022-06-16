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

	for (i = 0; i < n; i++)
	{
		for (j = n; j >= i; j--)
		{
			temp = a[j - 1];
			a[j - 1] =  a[j];
			a[j] = temp;
		}
	}
}
