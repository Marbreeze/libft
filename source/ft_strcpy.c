char *strcpy(char *dest, const char *src)
{
    int i = 0;
    int g = 0;
    while (src[g])
    {
        dest[i] = src[g];
        i++;
        g++;
    }
    dest[i] = '\0';
    return (dest);
}