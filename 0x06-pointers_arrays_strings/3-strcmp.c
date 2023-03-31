#include"main.h"

int _strcmp(char *s1, char *s2)

{
	int a = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if(*s1!=*s2)
		{
	a=1;
		}
		s1++;
		s2++;
	}
	if (a==0)
		return (0);
	else
		return(1);
	

}
