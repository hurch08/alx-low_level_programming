#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q')
		{
			x = x + 0;
			continue;
		}
		if (x == 'e')
		{
			x = x + 0;
			continue;
		}
		putchar(x);
	}

	putchar('\n');
	return (0);
}
