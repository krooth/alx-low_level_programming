#include "main.h"

/**
 * _isupper - checks if character is uppercase or not
 * @c: int parameter
 *
 * Return: 1 if uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

