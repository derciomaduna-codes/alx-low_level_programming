#include "main.h"
/**
 * print_line- draws a straight line in the terminal
 * @n: the value we will use to loop the length
 * Return: 0 (Success)
 */

void print_line(int n)
{
int k;
if (n >= 0)
{
for (k = 0; k < n; k++)
{
printf("_");
}
}
printf("\n");
}
