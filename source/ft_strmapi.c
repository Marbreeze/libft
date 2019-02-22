char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    int i = 0;
    char *fresh;
    fresh = (char *)malloc(sizeof(int) * (ft_strlen(s)));
    if(!s || !f || !fresh)
    while(s[i])
    {
        fresh[i] = f(i,&(s[i]));
        i++;
    }
    return (fresh);
}
