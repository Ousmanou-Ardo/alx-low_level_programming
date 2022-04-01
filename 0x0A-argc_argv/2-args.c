#include <stdio.h>
/**
 * main - output all arguments passed to the function.
 * @argc: count's argument
 * @argv: vector's argument
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
