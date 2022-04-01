#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checking  valid input
 * @argc: count's argument
 * @i: counter's argv[]
 * @j: counter's  argv[][]
 * @argv: vector's argument
 * Return: 0 if success, 1 else failure
 */
int checker(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
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
	int coins;

	cents = coins = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (checker(argc, 1, 0, argv) == 0)
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