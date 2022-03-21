/**
 * _strlen - compute length of a string.
 * @str: pointeer of our character .
 * Return: length of the string is returned;
 */
int _strlen(char *str)
{
int e;
e = 0;
while (*str != '\0')
{
e++;
str++;
}
return (e);
}
