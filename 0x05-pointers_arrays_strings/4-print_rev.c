#include "main.h" 

/** 
 * print_rev - prints string backwards
 * @x: string 
 * Return: void 
 */

void print_rev(char *x)
{
	int i = 0; 	
	while (x[i] != '\0')	
	{		
		i++;
	}
	i--;
	while (i >= 0)
	{		
		_putchar(x[i]);
		i--;
	}
	_putchar('\n');
}
