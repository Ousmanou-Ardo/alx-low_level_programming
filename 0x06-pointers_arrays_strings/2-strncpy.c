/**
 * _strncpy - copying string up to n
 * @dest: pointing to the string destination
 * @src: pointing to the string to copy from source
 * @n: the bytes to be copied.
 * Return: Pointing to the final destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
