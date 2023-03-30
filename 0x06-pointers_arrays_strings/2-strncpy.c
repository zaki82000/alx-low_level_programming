#include"main.h"


char *_strncpy(char *dest, char *src, int n)

{

	char *d_temp = dest;
	char *s_temp = src;

	
		while (*d_temp > '\0')

		d_temp++;
		s_temp++;
	
		if (n > 0)
		{
			while (*s_temp)
			{
				*d_temp++ = *s_temp++;
			}
			}

		*d_temp= '\0';
			return (dest);



}
