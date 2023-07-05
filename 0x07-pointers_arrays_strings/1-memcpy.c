#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: bytes from memory area src.
 * @src: memory area we want to copy from.
 * @dest: memory area we want to copy to.
 *
 * Return: pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
