#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_valid_int - checks if a string is a valid integer
 * @s: string
 *
 * Return: 1 is s is a valid integer. 0 otherwise
 */
int is_valid_int(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);

		s++;
	}

	return (1);
}
/**
 * main - adding all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int i;
	int total = 0;

	/* if no other arguments are passed */
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/* check if the argument is a valid integer */
		if (is_valid_int(argv[i]))
		{
			total += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", total);

	return (0);
}




