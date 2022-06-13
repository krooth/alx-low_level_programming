#include "main.h"\

/**
	* swap_int - prints value of two pointers
	* @a: integer parameter
    * @b: integer parameter
	*
	* Return: returns nothing
	*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
