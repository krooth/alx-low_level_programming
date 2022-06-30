#include "main.h"

/**
	* _strstr - returns character on the first occurence
	* @haystack: string to look a character for
	* @needle: character we're looking for
	*
	* Return: returns char
	*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, signal = 0;
	char *p;

	if (needle[0] != '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				signal = 1;
			}
			if (haystack[i + j] != needle[j])
			{
				signal = 0;
				break;
			}
		}
		if (signal == 1)
		{
			p = &haystack[i];
			return (p);
		}
		else
		{
			continue;
		}
	}
	if (haystack[i] == needle[0])
		return (&haystack[i]);
	return ('\0');
}
