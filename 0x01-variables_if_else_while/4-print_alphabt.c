#include <stdio.h>

/**
 * main - Printing out all the alphabet except e and q.
 *
 * Return: 0.
 */
int main(void)
{
	char Alphabets;

	for (Alphabets = 'a';  Alphabets <= 'z'; Alphabets++)
	{
		if (Alphabets != 'e' && Alphabets != 'q')
			putchar(Alphabets);
	}
	putchar('\n');

	return (0);
}
