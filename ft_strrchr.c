#include <string.h>

char *strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i])
	{
		if(s[i] == c)
			return (&(s[i]));
		i--;
	}
	return (NULL);
}