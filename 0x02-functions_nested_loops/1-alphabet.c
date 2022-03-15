include "main.h"
/**
 * main - our entry point function
(* from there we can write all the code
 * we want and call the user_define function
 * return: 0 if the code exectued successfully
 */
void print_alphabet(void)
{
char al = 'a';
 
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');
return (0);
}
