#import "main.h"
/**
 * main - entry point of the function
 *
 * @ac: Arguments counter
 * @av: Arguments array
 * Return: 1 on error, 0 otherwise
 */
int main(int ac, char **av)
{
	unsigned long int c;

	if (ac != 2)
	{
		printf("Usage: %s password\n", av[0]);
		return (1);
	}
	c = checksum(av[1]);
	/* printf("%lu\n", c); */
	/* "Talk is cheap. Show me the code." */
	if (c != 2772)
	{
		printf("Wrong password\n");
		return (1);
	}
	printf("Tada! Congrats\n");
	return (0);
}
