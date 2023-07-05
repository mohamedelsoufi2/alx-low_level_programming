#include "main.h"

/**
 * _strstr - locates a substring.
 *@haystack: string to be scanned
 *@needle: substring to be matched
 *
 *Return: pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *n = needle;

		while (*i == *n && *n != '\0')
		{
			i++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}

