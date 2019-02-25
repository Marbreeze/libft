#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;

    
    while(haystack[i])
    {
        if(needle[0] == haystack[i])
        {
            int j = i;
            size_t g = 0;
            while(needle[g] == haystack[j] && g < len)
            {
                g++;
                j++;
            }
            if (g == len)
                return (&(haystack[i]));
        }
        i++;
    }
    return (NULL);
}