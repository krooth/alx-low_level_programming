#include "main.h"

/**
	* _strlen - coutns length of a string
	* @s: character parameter
	*
	* Return: returns integer of number of chars
	*/

int _strlen(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
