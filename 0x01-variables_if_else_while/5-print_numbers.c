#include <stdio.h>
#include <stdlib.h>

/**
  * main - print digits of base 10
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num;
	
	num = 0;
	while (num < 10)
	{
		num ++;
		putchar(num);
	}

	putchar('\n');
	return (0);
}
