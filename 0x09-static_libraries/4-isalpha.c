#include "main.h"
/**
* _isalpha - checks for alphabetic character
*Return: 1 if c is a letter, lowercase or uppercase
*0 if otherwise
*@c: The character in ASCII code
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
