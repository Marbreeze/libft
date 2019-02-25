#include <string.h>

int    ft_strlcat(char * dst, const char * src, size_t dstsize)
 {
     int dst_len = 0;

     int g  = 0;


while(dst[dst_len])
    dst_len++;
 
 while(dst_len + g < dstsize && src[g])
 {
      dst[dst_len + g] = src[g];
      g++;
 }
  return (dst_len + g);
 }