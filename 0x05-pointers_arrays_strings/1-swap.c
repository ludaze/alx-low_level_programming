#include "holberton.h"

/**
 *swap_int: to swap two integers
 *
 *Return : void
 */

void swap_int(int *a, int *b)
{
  int *c = *a;
  *a = *b;
  *b = *c;
}
