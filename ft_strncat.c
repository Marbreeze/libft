#include <string.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
    
    int g = 0;
    size_t i;

    i = 0;
    while(dest[i])
        i++;
    while(i < n && src[g] != '\0')
    {
        dest[i] = src[g];
        i++;
        g++;
    }
    return (dest);
}