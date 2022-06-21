#include "main.h"

/**
	* _strchr - looks for a character
	* @s: string to look a character for
	* @c: character to look for
	*
	* Return: returns character
	*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *result;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = &s[i];
			return (result);
		}
		i++;
	}
	return ('\0');
}
