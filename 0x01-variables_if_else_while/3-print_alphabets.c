#include <stdio.h>
/**
*
*main - Prints alphabets in lower then upper case
*
*Return: Always 0 (success)
*/
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alph[i]);
}
putchar('\n');
return 0;
}
