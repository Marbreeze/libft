int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z')|| (c >= 'a' && c <= 'z'))
     return (1);
    else 
     return (0);

}

int main ()
{
    int a;
    a = ft_isalpha(95);
    printf("%c\n", a);
}