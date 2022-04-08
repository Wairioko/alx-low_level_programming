#include <stdio.h>
/**
*main - print all letter except q and e
*
*Return: Always 0 (success)
*/
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz"
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
return (0);
}
