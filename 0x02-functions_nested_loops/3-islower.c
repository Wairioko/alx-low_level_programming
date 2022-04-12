#include "main.h"
/**
*
*_islower - finds lowercase characters
*Return: 1 if c is lowercase 0 for the rest
*@c: The character in ASCII code
*/
int _islower(int c)
{
if(c>=97 && c<=122){
return (1);
}
else{
return (0);
}
_putchar('\n');
}
