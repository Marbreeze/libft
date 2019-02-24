char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *fresh;
    *fresh = (char *)malloc(sizeof(char) * size_t len + 1);
    
    while(s[i] && fresh[start])
    {
        if(s[i] != fresh[start])
        {
            i++;
            start++;
        }
    }
    return (NULL);
        
        if (s[i] == fresh[start] && s[i] && s[start])
        {
            i++;
            start++;
        }
}return (fresh);