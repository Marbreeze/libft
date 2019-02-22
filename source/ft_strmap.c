#include <string.h>

char * ft_strmap(char const *s, char (*f)(char))
{
    int i = 0;
    char *fresh;
    int g = 0;
    fresh = (char *)malloc(sizeof(char) * ft_strlen(s)); 
    if(!s || !f || !fresh)
        return (NULL);

    while (s[i])
    {
        fresh[i] = f(&(s[i]));
        i++;
    }
    return (fresh);    
}