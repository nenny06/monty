#include <stdio.h>

/**
 * main - main entrance
 * @argc: argument count for imteger
 * @argv: pointer to argument variable
 * Return: 1
 */
int main(int argc, char *argv[])
{

	if (argc != 2)

	{
		printf("Usage: %s filename\n", argv[0]);
		return (1);
	}
	FILE *fp = fopen(argv[1], "r");

	if (fp == NULL)

	{
		fprintf("Error: could not open file '%s'\n", argv[1]);
		return (1);
	}
}
