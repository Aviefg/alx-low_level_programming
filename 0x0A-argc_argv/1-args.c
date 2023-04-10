#include "main.h"
#include <stdio.h>

/**
 * main - This function prints the number of arguments passed
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

