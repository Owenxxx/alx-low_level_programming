#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
* Return: return always 0.
*/
void print_alphabet_x10(void)
{
	int co;
	char n;

	co = 0;

	while (co < 10)
{
	for (n = 'a'; n <= 'z'; n++)
{
	_putchar(n);
}
	co++;
	_putchar('\n');
}
}
