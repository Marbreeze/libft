#include <string.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    int i = 0;
    int g = 0;
    while(haystack[i])
    {
        g = 0;
        if (haystack[i] == needle[g])
        {
          int j = i;
          while(needle[g] && haystack[j] == needle[g])
          {
              j++;
              g++;
          }
          if (needle[g] == '\0')
              return(&(haystack[i]));
        }
        i++;
    }
    return (NULL);
}