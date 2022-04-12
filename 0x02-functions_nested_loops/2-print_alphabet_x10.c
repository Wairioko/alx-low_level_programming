#include "main.h"
/**
*main - a function that prints 10 times the alphabet, in lowercase, followed by a new line
*
*Result: Always 0(success)
*/
void print_alphabet_x10(void)
{
  int a, b;

  for (a = 0; a <= 9; a++)
    {
      for (b = 97; b <= 122; b++)
	{
	  _putchar(b);
	}
      _putchar('\n');
    }
}
