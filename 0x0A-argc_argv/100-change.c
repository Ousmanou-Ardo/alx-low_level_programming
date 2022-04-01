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
 * main - output minimum number of coins
 * changing for an amount of cents.
 * @argc: count's argument
 * @argv: vector's argument
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	unsigned int cents;
	int coins, i;

	cents = coins = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (is_valid_int(argv[i]))
		{
			cents = atoi(argv[1]);
			for ( ; cents >= 25; coins++, cents -= 25)
				;
			for ( ; cents >= 10; coins++, cents -= 10)
				;
			for ( ; cents >= 5; coins++, cents -= 5)
				;
			for ( ; cents >= 2; coins++, cents -= 2)
				;
			for ( ; cents >= 1; coins++, cents--)
				;
			printf("%d\n", coins);
		}
	}
	else
		printf("Error\n");
	return (0);
}
