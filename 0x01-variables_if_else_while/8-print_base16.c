#include <stdio.h>
/**
 * main - prints numbers from 0-16)
 * blank space
 * Return: 0
 */
int main(void)
{
	int numb;
	char alphabet;

	for (numb = 0; numb < 16; numb++)
		putchar(numb);

	for (alphabet = 'a'; alphabet <= 'z')
		putchar(alphabet);

	putchar('\n');
	return (0);
}
