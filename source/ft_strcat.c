#include <string.h>

char *strcat(char *dest, const char *src)
{
  int i = 0;
  int g = 0;
  
  
  while (dest[i] != '\0')
  {
      i++;
  }
 
  if(dest[i] =='\0')
  while (src[g])
    {
        dest[i] = src[g];
        g++;
        i++;  
    }
    return(dest); 
}