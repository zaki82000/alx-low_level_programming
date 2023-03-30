#include"main.h"


char *_strncpy(char *dest, char *src, int n)

{

	char *d_temp = dest;
	char *s_temp = src;


	while (*d_temp > n)
	{
		*d_temp++ = *s_temp++;
			
	}
		return (dest);







}
