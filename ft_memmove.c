#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *cdst = (char *)dest;
    char *csrc = (char *)src;
    size_t i = 0;
    int g = 0;

while( i < n && csrc[g])
{
    cdst[i] = csrc[g];
    i++;
    g++;
}
cdst[i] = '\0';
return (dest);
}