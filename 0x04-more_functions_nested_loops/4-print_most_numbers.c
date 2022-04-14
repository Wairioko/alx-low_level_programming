#include "main.h"
/**
*print_most_numbers - prits num
*between 0-9 but not 2&4
*/
void print_most_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
if (ch != 50 && ch != 52)
{
_putchar(ch)
}
}
}
