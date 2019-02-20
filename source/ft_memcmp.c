#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1 = (unsigned char*)s1;
    unsigned char *str2 = (unsigned char*)s2;

    size_t i = 0;

    while(i < n && str1[i] && str2[i])
    {
        if(str1[i] > str2[i])
            return (1);
        else if(str1[i] < str2[i])
            return (-1);
        i++;
    }
    return (0);
}