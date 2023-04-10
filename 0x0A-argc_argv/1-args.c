#include "main.h"
#include <stdio.h>

/**
 * main - This function prints the program name
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%s\n", argc - 1);

	return (0);
}

