#include "main.h"


/**
	* _memset - sets the memory with a given set of characters
	* @s: pointer to write characters on
	* @b: character to fill in the memory with
	* @n: size of mem to fill in
	*
	* Return: returns character
	*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
