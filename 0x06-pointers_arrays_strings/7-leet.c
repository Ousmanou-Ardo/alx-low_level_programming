/**
 * leet - encod aer of string into leetspeek.
 * @s: pointing to input string.
 * Return: Returning pointer to leetspeek string.
 */
char *leet(char *s)
{
	int i, k;
	char subs[] = "aAeEoOtTlL";
	char le[] = "1337";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; subs[k] != '\0'; k++)
			if (s[i] == subs[k])
				s[i] = le[k / 2];
	}
	return (s);
}
