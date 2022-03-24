/**
 * cap_sing - capitalizes string's words.
 * @s: pointing to input string.
 * Return: Returning pointer to the capitalized string.
 */
char *cap_string(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		/*for (k = 0; sep[k] != '\0';k++)
			if (s[i - 1] == sep[k] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;*/
        while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||
		    s[i - 1] == '\t' ||
		    s[i - 1] == '\n' ||
		    s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}' ||
		    i == 0)
			s[i] -= 32;

		i++;





	}
	return (s);
}
