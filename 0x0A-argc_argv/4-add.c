#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checking valid input
 * @argc: count's argument
 * @i: counter's argv[]
 * @j: counter's  argv[][]
 * @argv: vector's
 * Return: 0 if success, 1 when failure
 */
int checker(int argc, int i, unsigned int j, char **argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - adding all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (checker(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}

