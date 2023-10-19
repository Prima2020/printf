#include "main.h"
<<<<<<< HEAD
/**
 * print_bin - converts to binary
 * @val:argument
 * Return: integer
 */
=======
>>>>>>> 4c6af89bc45be09d7d92943ce66eb65485c29c6c

int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
<<<<<<< HEAD
		if (p >> (31 - i))
			flag - i;
=======
		if (p >> (31- i))
			flag = 1;
>>>>>>> 4c6af89bc45be09d7d92943ce66eb65485c29c6c
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
<<<<<<< HEAD
	if  (cont == 0)
=======
	if (cont == 0)
>>>>>>> 4c6af89bc45be09d7d92943ce66eb65485c29c6c
	{
		cont++;
		_putchar('0');
	}
	return (cont);
<<<<<<< HEAD
}  

=======
>>>>>>> 4c6af89bc45be09d7d92943ce66eb65485c29c6c
