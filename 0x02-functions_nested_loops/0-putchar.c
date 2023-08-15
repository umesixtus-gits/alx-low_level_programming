#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char *alph = "_putchar";

	while (*alph)
	{
		_putchar(*alph);
		alph++;
	}
	_putchar('\n');
	return (0);
}
