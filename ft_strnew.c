#include <string.h>

char * ft_strnew(size_t size)
{
    size_t i ;
    i = 0;

    char *fresh;
    fresh = (char *)malloc(sizeof(char) * size);
    if(!fresh)
        return (NULL);
    while(fresh[i])
    {
        fresh[i] = '\0';
        i++;
    }
    return (fresh);
}