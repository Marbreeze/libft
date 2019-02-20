#include <string.h>
#include <stdio.h>
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *cdst = (unsigned char *)dst;
    unsigned char *csrc = (unsigned char *)src;
    unsigned char cc = (unsigned char)c;

 size_t   i = 0;
   while(i < n ) //index is smaller then bytesize and the 0
   {
       if(csrc[i] == cc && (i + 1 < n))
       {
            cdst[i] = csrc[i];            
            return &(cdst[i + 1]);
       }
        else
        {
            cdst[i] = csrc[i];            
            i++;
        }
    }
return (NULL);
}

int main() 
{
  char csrs[] = "Original sring";
  char cdst[15];
  char *print = ft_memccpy(cdst, csrs, 'a', 10);
  printf("%s\n",print);
  return 0;
}