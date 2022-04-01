#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplicating  numbers and give result
 * @argc: argument count must be exactly two numbers
 * @argv: argument vector
 * Return: 0 when success, 1 when failure
 */
int main(int argc, char *argv[])
{
	int res1, res2;

	res1 = res2 = 0;
	if (argc == 3)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		printf("%d\n", res1 * res2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
