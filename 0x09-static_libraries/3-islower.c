#include "main.h"

/**
	* _islower - checks if character is lower
	* @c: integer parameter for _islower
	*
	* Return: returns 1 if character is lowercase and 0 if not
	*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
