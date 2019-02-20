void *memmove(void *dest, const void *src, size_t n)
{
    char *cdst = (char *)dst;
    char *csrc = (char *)src;
    char *buffer;
    int i = 0;

if (i < n)
{
    while(*csrc && csrc [1][i])
    {
        buffer[1][i] = csrc[1][i];
        cdst[1][i] = buffer[1][i];
    }
    i++;
}
return (dest); //not right