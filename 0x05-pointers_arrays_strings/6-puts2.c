#include"main.h"

void puts2(char *str)
{
	char *temp = str;
	int i;

	for (i = 0; temp[i] != '\0'; i++)
	{
		_putchar(i);
		_putchar(temp[i]);
	}
_putchar('\n');
}

