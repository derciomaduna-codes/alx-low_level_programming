#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */
int _abs(int a)
{
	int absvalue;

	if (a < 0)
	{
		a = a * (-1);
	}
	absvalue = a;
	return (absvalue);
}
