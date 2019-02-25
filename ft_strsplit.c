#include "libft.h"

static size_t ft_wordcount(char *s, char c)
{
    size_t i;
    size_t wd;

    i = 0;
    wd = 0;
    while(s[i])
    {
        if(s[i] != c)
            wd++;
        while(s[i] != c && (s[i + 1]))
            i++;
    }
    return (wd);
}

static size_t ft_getlen(char const *s, char c)
{
     size_t i;
     size_t n;
    i = 0;
    n = 0;

while(s[i] == c && s[i])
    {
        i++;
    }
while (s[i] != c && s[i++])
    {
        n++;
    }
return (n);
}

char    **ft_strsplit(char const *s, char   c)
{
    size_t j;
    size_t k;
    size_t i;
    i = 0;
    k = 0;
    char **fresh;
    if(!s || !(fresh = (char *)malloc(sizeof(char) * (ft_wordcount(s,c) + 1))))
        return (NULL);
    if(!(fresh = (char *)malloc(sizeof(char) * (ft_getlen(s,c)))))
        return (NULL);
    while(s[k] == c)
    {
        k++;
    }
    j= 0;

    while(s[k] != c && s[k])
    {
        fresh[i][j++] = s[k++];
        fresh[i][j] = '\0';
        i++;
    }
    fresh[i] = NULL;
    return (fresh);
}