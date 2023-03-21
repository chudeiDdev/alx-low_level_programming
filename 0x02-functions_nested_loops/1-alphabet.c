#include "main.h"
/**
 *print_alphabet - prints the alphabets
 *Return: 0 sucess
*/
void print_alphabet(void)
{
		int i = 0;

		while (i < 26)
		{
			_putchar(i + 'a');
			i++;
		}
		_putchar('\n');
}
