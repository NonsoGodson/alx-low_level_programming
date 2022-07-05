#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
