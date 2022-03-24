/**
 * cap_string - capitalizes string's words.
 * @s: pointing to input string.
 * Return: Returning pointer to the capitalized string.
 */
char *cap_string(char *s)
{
	int i,k;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (k = 0; sep[k] != '\0';k++)
			if (s[i - 1] == sep[k] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
