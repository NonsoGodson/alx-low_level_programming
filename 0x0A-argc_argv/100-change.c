#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int cents = 0;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			if (num / coin[i] > 0)
			{
				cents += num / coin[i];
				num = num % coin[i];
			}
		}
		printf("%d\n", cents);
	return (0);
}
