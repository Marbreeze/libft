#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
   unsigned char *str = (unsigned char *)s;
    int i = 0;
    while(i < n)
    {
        if (str[i] == c )
            return (&str[i]);
        i++;
    }
    return (NULL);

}