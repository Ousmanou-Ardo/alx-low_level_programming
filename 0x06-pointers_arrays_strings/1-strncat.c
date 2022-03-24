/**
 * _strncat - concatenation of two strings
 * @dest: pointing to the dest string
 * @src: pointing to  src string
 * @n: the bytes to be printed
 * Return: pointing to final  string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	for (k = 0; dest[k] != '\0'; k++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[k + i] = src[i];
		i++;
	}
	return (dest);
}
