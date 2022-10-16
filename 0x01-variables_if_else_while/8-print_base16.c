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

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
