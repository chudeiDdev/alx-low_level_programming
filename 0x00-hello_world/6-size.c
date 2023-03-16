#include <stdio.h>

/*
 *You should produce the exact same output as in the example
 *Warnings are allowed
 *Your program should return 0
 *You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
*/

int main(void)
{
	printf("Size of a char: %d \n", sizeof(char));
	printf("size of an int: %d \n", sizeof(int));
	printf("size of a long int: %d \n", sizeof(long int));
	printf("size of a long long: %d \n", sizeof(long long));
	printf("size of a float: %d \n", sizeof(float));

	return (0);
}
