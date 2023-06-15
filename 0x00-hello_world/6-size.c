#include <stdio.h>

/**
 * main : - A program that prints the size of varios computer types
 * Return 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printif("Size of a char : %lu byte(s)\n", (unsigned long) sizeof(a));
	printif("Size of an  int : %lu byte(s)\n", (unsigned long) sizeof(b));
	printif("Size of a long int : %lu byte(s)\n", (unsigned long) sizeof(c));
	printif("Size of a long long int : %lu byte(s)\n", (unsigned long) sizeof(d));
	printif("Size of a float : %lu byte(s)\n", (unsigned long) sizeof(f));
}
