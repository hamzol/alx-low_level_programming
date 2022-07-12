#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @n: The first integer to be swapped.
 * @p: The second integer to be swapped.
 */
void swap_int(int *n, int *p)
{
int tmp = *n;
*n = *p;
*p = tmp;
}
