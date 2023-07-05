#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: characters to match
 * Return: pointer to the byte in s that matches accept's ones
 *		,or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, r;

	i = 0;
	while (s[i] != '\0')
	{
		r = 0;
		while (accept[r] != '\0')
		{
			if (accept[r] == s[i])
			{
				p = &s[i];
				return (p);
			}
			r++;
		}
		i++;
	}
	return (0);
}
