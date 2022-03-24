/**
 * rot13 - encoding string by rotating the characters.
 * @s: pointing to input string.
 * Return: pointer encoded string is returned.
 */
char *rot13(char *s)
{
	int i, k;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (k = 0; alpha[k] != '\0' && boolean == 0; k++)
		{
			if (s[i] == alpha[k])
			{
				s[i] = r[k];
				boolean = 1;
			}
		}
	}
	return (s);
}
