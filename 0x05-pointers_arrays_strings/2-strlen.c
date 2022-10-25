#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: character to check
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
