#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
	return (0);
}
