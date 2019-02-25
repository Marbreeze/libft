int ft_isprint(c)
{
    if(c < ' ' || c == 127)
    return (0);
    else 
    return (c);
}