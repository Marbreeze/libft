#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *cdst = (char *)dest;
    char *csrc = (char *)src;
    size_t i = 0;
    int g = 0;

while( i < n && csrc[g])
{
    cdst[i] = csrc[g];
    i++;
    g++;
}
cdst[i] = '\0';
return (dest);
}
int main()
{
    char first[50] = "you can finish it";
    char sec[20] = "finishlib_ft";
    char *a = ft_memmove(first, sec, 20);
    printf("%s\n%s\n",ft_memmove(first, sec, 5), memmove(first, sec, 5));
    return 0;
}