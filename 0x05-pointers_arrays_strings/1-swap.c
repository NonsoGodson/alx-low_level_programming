#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @m: pointer 1
 * @n: pointer 2
 * Return: void
 */

void swap_int(int *m, int *n)
{
	int x = *m;
	*m = *n;
	*n = x;
}
