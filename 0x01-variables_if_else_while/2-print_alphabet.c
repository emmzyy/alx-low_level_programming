#include <stdio.h>

/**
 * main - Printing out all the alphabet in lowercase.
 *
 * Return: 0.
 */
int main(void)
{
	char Alphabets;

	for (Alphabets = 'a';  Alphabets <= 'z'; Alphabets++)
		putchar(Alphabets);

	putchar('\n');

	return (0);
}
