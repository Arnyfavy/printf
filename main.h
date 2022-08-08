#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
/**
<<<<<<< HEAD
 * struct print - structure for printing variables
=======
 * struct print - structure for printing various types
>>>>>>> e888b3e7fd49e4b60057fcfb07801a4c826bb08d
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
		char *t;
			int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif  /* _MAIN_H */
