#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;

    while (s[i])
    {
        if(i == c)
        return (&(s[i]));
        i++;
    }
    return (NULL);
}