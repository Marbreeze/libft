
#include <stdlib.h>
void *ft_bzero(void *s, size_t len)
{
    char *str;

    str = s;
    int i = 0;

    if (len == 0)
        return (0);
    else
    {
        while (len > 0)
        {
            len--;
            str[i] = 0;
            i++;
        }
    }
}