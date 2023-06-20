#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 *@c: The number to be computed
 * Return: Absolute value of number or zeri
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abc_val;

		abc_val = c * -1;
		return (abc_val);
	}
	return (c);

}
