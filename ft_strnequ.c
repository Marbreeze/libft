#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int i = 0;
    
    if( i < n  && s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    if (s1[i] == s2[i])
        return (1);
    return(0);
}