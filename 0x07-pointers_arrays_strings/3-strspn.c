#include "main.h"

/**
	* _strspn - countes the number of bytes in a string
	* @s: string to look a character for
	* @accept: string to count bytes for
	*
	* Return: returns integer
	*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
