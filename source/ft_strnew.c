char * ft_strnew(size_t size)
{
    size_t i ;
    i = 0;

    char *fresh;
    fresh = (char *)malloc(size);
    if(!fresh)
    while(fresh[i])
    {
        fresh[i] = '\0';
        i++;
    }
    return (0);
}