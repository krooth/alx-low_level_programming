#include "main.h"


char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; needle[i] != '0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				p = &haystack[j];
				return (p);
			}
		}
	}
	return ('\0');
}