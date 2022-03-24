/**
 * leet - encodinginto leetspeek.
 * @s: pointing string.
 * Return: Returning leetspeek string.
 */
char *leet(char *s)
{
	int i, k;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; subs[k] != '\0'; k++)
			if (s[i] == subs[k])
				s[i] = le[k / 2];
	}
	return (s);
}
