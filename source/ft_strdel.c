void ft_strdel(char **as)
{
    //if(!(&(as)))
    
    while(&(as))
    {
        free(&(as));
        as = NULL;
    }


}