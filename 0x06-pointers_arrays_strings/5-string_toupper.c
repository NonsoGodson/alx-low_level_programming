#include "main.h"

/**
 * string_toupper - lower to upper
 * @b: pointer to char params
 *
 * Return: *b
 */

char *string_toupper(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
			b[i] -= 32;
	}
	return (b);
}
