 #include <stdio.h>
/**
 *main - entry point
 *Return: 0 sucessful
*/

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
{
		for (j = 0; j < 10; j++)
{
			for (k = j + 1; k < 10; k++)
{
				for (l = 1; l < 10; l++)
{
					if (i > 0 || j > 0 || k > 0 || l > 1)
{
						putchar(',');
						putchar(' ');
}


					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
}
}
}
}
	putchar('\n');
	return (0);
}
