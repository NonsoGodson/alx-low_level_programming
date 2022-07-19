#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the memory space to be filled
 * @b: a constant byte
 * @n: number of bytes in the memory
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
