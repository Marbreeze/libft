#include <stdlib.h>
void *ft_memcpy(void *restrict dst, const void *restrict src,size_t n)
{
   char *csrc = (char *)src; // transform void into a char pointer
   char *cdst = (char *)dst;
   
int   i = 0;
   while(i < n && i >= 0) //index is smaller then bytesize and the 0
   {
     cdst[i] = csrc[i];
     i++;
    }
return (cdst);

}

int main ()
{
  char csrc[] = "Marina";
  char cdst[13];
  char *a = ft_memcpy(cdst,csrc,strlen(csrc)+1); //goes till the null
  printf("%s\n", cdst);
}