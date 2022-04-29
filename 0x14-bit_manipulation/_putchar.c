#include "main.h"

/**
 * _putchar - a function that prints a character to stdout
 * @c : character to be printed
 *
 * Return - an integer with the write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
