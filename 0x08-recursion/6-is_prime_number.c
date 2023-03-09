#include "main.h"
/**
 * is_prime_number - Checks if a number is divisible.                
 * @num: The number to be checked.                             
 * @div: The divisor.
 * Return: If the number is divisible - 0.    
 * If the number is not divisible - 1.                                             
 */                
int is_prime_number(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_prime_number(num, div + 1));
}
