#include"main.h"

/**
*_strspn - function to gets the length of prefix substring,
*i: counter array s,j: counter array accept,
*@s: string,len: counter all loops.
*@accept: number of bytes in the initial segment.
*Return: if s array != accept array return len.
*/

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			len++;
			break;
			}
		}
			if (s[i] != accept[j])
			{
			return (len);
			}
	}
	return (0);
}
