#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int q, r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	q = atoi(argv[1]);
	r = atoi(argv[2]);
	printf("%d\n", q * r);

	return (0);
}
