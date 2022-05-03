#include "main.h"
/**
* *_strpbrk - gets the length of a prefix substring
* @s: string to evaluate
* @accept: string containing the list of characters to match in s
*
* Return: the number of bytes in the initial segment
* of s which consist only of bytes from accept
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
return (s + i);
}
}
return ('\0');
}
