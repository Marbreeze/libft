#include <string.h>

char * ft_strjoin(char const *s1, char const *s2)
{
    int g = 0 ;
    int i = 0;
    char *fresh;
    
    
    fresh = (char *)malloc(sizeof(char) * (ft_strlen (s1) + ft_strlen(s2) + 1));
    if(!s1 || !s2)
    return (NULL);

  while(s1[i])
  {
    fresh[i] = s1[i];
    i++;
  }
  while(s2[g])
    {
        fresh[i] = s2[g];
        i++;
        g++;
    }
    fresh[i] = '\0';
  return (fresh);
}