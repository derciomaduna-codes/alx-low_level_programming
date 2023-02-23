#include "main.h"
/**
 * print_most_numbers-prints the numbers, from 0 to 9, followed by a newline.
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
int k;
for (k = 0; k < 10; k++)
{
if (k != 2 && k != 4)
{
printf("%d", k);
}
}
printf("\n");
}
