void ft_strclr(char *s)
{
    
    int i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}

int main()
{
    char s[10] = "part two";
    ft_strclr(s);
    printf("%s\n", s);
    return (0);

}