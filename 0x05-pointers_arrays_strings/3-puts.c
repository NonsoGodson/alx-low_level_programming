#include "main.h"

/**
 * _puts - prints string
 * @abc: string
 * Return: void
 */

void _puts(char *abc)
{
	int i = 0;

	while (abc[i] != '\0')
	{
		_putchar(abc[i]);
		i++;
	}

	_putchar('\n');
}
