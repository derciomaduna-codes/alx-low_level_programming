#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase 10 times.
 * Return: On success 1.
 */

void print_alphabet_x10(void){
    
	char letter, count;

	for (count = 0; count < 10; count++)
	{

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}

  
    return (0);
}
