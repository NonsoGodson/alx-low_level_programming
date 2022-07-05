#include <main.h>

/**
 * alphabet_print - prints the alphabets in lowercase, followed by a new line.
 */
void alphabet_print(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
