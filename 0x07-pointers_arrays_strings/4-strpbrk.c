#include "main.h"

/**
	* _strpbrk - returns character on the first occurence
	* @s: string to look a character for
	* @accept: character we're looking for
	*
	* Return: returns char
	*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				p = &s[j];
				return (p);
			}
		}
	}
	return ('\0');
}
