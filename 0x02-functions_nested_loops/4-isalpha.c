#include "main.h"

/**
 * _isalpha - checks if character is alphabet or not
 * @c: int parameter
 *
 * Return: 1 if alphabet, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
