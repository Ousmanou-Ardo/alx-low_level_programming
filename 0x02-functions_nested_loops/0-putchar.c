#include "main.h"
/**
 * main - here is the entry point of our function
 * return: 0 if the everything runs as expected
 *let's try to write the function
 */
int main(void)
{
  char y[]={'_', 'p', 'u', 't', 'c','h', 'a', 'r'};
  int h=0;



  while (y[h] != '\0')
    {
      _putchar(y[h]);
      
      h++;
    }
  _putchar('\n');
  return (0);
}
