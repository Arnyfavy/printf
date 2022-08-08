#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - write the character c to stdouf
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set a
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
>>>>>>> e888b3e7fd49e4b60057fcfb07801a4c826bb08d
}
