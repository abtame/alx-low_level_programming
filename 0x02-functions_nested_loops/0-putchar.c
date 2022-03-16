#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *_putchar;

	for (putchar = "_putchar\n"; *_putchar != '\0'; ++_putchar)
		_putchar(*_putchar);
	return (0);
}
