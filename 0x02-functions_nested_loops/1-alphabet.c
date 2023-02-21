#include "main.h"

/**
 * main - check the code
 * Description : 'prints all the alphabets'
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void){
    // Get the character to be written
    char ch = 'a';
  
    // Write the Character to stdout
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
  
    return (0);
}
