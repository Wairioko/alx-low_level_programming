#include "main.h"
/**
* print_sign - prints sign for numbers
*Returns: rerurns 1 and + if n is greater than zero
*0 and prints 0 if n is zero
*-1 and prints - if n is less than zero
*@n: The input number as an integer.
*/
int print_sign(int n)
{
if (n > 0)
{
return(1);
_putchar(43);
}
else if ((n = 0))
{
return(0);
_putchar(48);
}
else{
return(-1);
_putchar(45);
}
_putchar('\n')
}
