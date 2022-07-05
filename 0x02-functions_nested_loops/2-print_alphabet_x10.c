#include "holberton.h"

/**
 * alphabet printx10 - Prints 10 times the alphabet in lowercase.
 */
void alphabet printx10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
