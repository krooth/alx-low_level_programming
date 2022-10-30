#include "main.h"

/**
 * _islower - checks if case is lowercase or not
 * @c: int parameter
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
