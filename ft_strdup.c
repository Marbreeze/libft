#include "libft.h"

char *ft_strdup(const char *s)
{
    int i = 0;
    int g = 0;
    char *fresh;
    fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    while (s[i])
    {
        fresh[g] = s[i];
        g++;
        i++;
    }
    fresh[g] = '\0';
    return (fresh);
}