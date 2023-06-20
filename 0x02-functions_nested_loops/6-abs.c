#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _abc(int c)
{
	if (c < 0)
	{
		int abc_val;

		abc_val = c * -1;
		return (abc_val);
	}
	return (c);

}
