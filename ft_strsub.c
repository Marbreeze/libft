#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *fresh;
    int i;

    *fresh = (char *)malloc(sizeof(char) * (len + 1));
    i = 0;
    while(s[i] && fresh[start])
    {
        if(s[i] != fresh[start])
        {
            i++;
            start++;
        }
    }
    if (s[i] == fresh[start] && s[i] && s[start])
    {
        i++;
        start++;
    }
    return (fresh);
}