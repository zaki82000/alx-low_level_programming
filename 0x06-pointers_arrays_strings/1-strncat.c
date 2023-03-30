#include"main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *dest_temp = dest;
	char *src_temp = src;
 	
	
	while (*dest_temp != '\0')
	       dest_temp++;	

	while (n > 0)
	{
		if (*src_temp)
		*dest_temp++ = *src_temp++;
		n--
	}
		dest_temp = '\0';
		return (dest);

}
