#include "main.h"
/**
*print_rev - prits string in reverse
*
*@s: string
*Return - Always 0 (success)
*/
void print_rev(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
for (count--; count >= 0; count--)
_putchar(s[count]);
_putchar('\n');
}
