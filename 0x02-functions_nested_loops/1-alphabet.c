#include "main.h"
/**
 * alphabet - is the function that is defined
  * Return: 0
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);

	}
	_putchar('\n');
}
