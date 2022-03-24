/**
 * _strcat - Two strings are concatenated
 * @dest: pointeing of the dest string
 * @src: pointing to the src string
 * Return: pointing to the obtained string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	for (b = 0; dest[b] != '\0'; b++)
		;
	while (src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	return (dest);
}
