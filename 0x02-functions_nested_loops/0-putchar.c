#include <unistd.h>
#include "main.h"
/**
* main - writes the character c to stdout
* Description: The character to print
*
* Return: On success 0.
*
*/
int main(void)
{
char text[8] = "_putchar";
int i;
for (i = 0; i <= 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
