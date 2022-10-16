#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 * blank line
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
		putchar(alphabets);

	putchar('\n');
	return (0);
}
