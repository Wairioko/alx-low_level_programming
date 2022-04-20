#include "main.h"
/**
*swap_int - swaps values of integers
*@a: first integer
*@b: second integer
*Return -  Always 0 (success)
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
