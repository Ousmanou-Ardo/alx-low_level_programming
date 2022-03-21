/**
 * swap_int - swap  first input with  the second input.
 * @q: First value to swap.
 * @p: Second value to swap.
 */
void swap_int(int *q, int *p)
{
int temp;

temp = *q;
*q = *p;
*p = temp;
}
