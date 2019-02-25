#include <string.h>

void    *ft_memalloc(size_t size)
{
    void *fresh;
    fresh = malloc(size);
    if (!fresh)
        return (NULL);
    ft_bzero(fresh, size);
    return (fresh);
}