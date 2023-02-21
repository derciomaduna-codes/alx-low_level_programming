#include "main.h"

/**
 * main - check the code
 * Description - 'prints all the alphabets'
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
return (0);
}
