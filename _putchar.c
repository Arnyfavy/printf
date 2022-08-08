#include <unistd.h>

/**
 * _putchar - write the character c to stdouf
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set a
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}
