#include <stdio.h>
/**
 * main -output all  arguments passed to the function.
 * @argc: count's argument
 * @argv: vector's argument
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
