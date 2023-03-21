#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabets 10x
 *Return: 0 sucess
*/
void print_alphabet_x10(void)
{
		int i;
		int j;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; i < 26; j++)

				_putchar('a' + j);

			_putchar('\n');
		}
	
}
