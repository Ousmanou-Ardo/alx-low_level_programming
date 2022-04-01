#include <stdio.h>
/**
 * main - Printing its own name.
 * @argc: count's  argument
 * @argv: vectors argument
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	argc--; /*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
